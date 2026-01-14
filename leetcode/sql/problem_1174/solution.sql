-- >>> SOLUTION 1 >>>
-- Using ROW_NUMBER window function to filter for first delivery
SELECT
    ROUND(100 * AVG(immediate_delivery), 2) AS immediate_percentage
FROM (
    SELECT
        *,
        ROW_NUMBER() OVER (PARTITION BY customer_id ORDER BY order_date) AS row_number,
        (
            CASE
                WHEN order_date = customer_pref_delivery_date THEN 1
                ELSE 0
            END
        ) AS immediate_delivery
    FROM
        Delivery
) a
WHERE
    a.row_number = 1;
-- <<< SOLUTION 1 <<<

-- >>> SOLUTION 2 >>>
-- Using MIN(order_date) and a WHERE clause
SELECT
    ROUND(100 * AVG(CASE WHEN order_date = customer_pref_delivery_date THEN 1 ELSE 0 END), 2)
        AS immediate_percentage
FROM
    Delivery
WHERE (customer_id, order_date) IN
(
    SELECT
        customer_id,
        MIN(order_date)
    FROM
        Delivery
    GROUP BY
        customer_id
)
-- <<< SOLUTION 2 <<<
