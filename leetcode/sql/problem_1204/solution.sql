SELECT
    cum.person_name
FROM (
    SELECT
        person_name,
        turn,
        SUM(weight) OVER (ORDER BY turn) AS cumulative_weight
    FROM
        Queue
) cum
WHERE
    cum.cumulative_weight <= 1000
ORDER BY
    turn DESC
LIMIT
    1;
