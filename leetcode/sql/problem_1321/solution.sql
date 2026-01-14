SELECT
    moving_averages.visited_on,
    moving_averages.amount,
    ROUND(moving_averages.amount::NUMERIC / 7, 2) AS average_amount
FROM (
    SELECT DISTINCT
        visited_on,
        SUM(amount) OVER (
            ORDER BY visited_on
            RANGE BETWEEN '6 days' PRECEDING AND CURRENT ROW
        ) AS amount
    FROM
        Customer
) moving_averages
-- start on 7th day of data
WHERE
    moving_averages.visited_on - INTERVAL '6 days' >= (SELECT MIN(visited_on) FROM Customer)
-- order by day
ORDER BY
    moving_averages.visited_on;
