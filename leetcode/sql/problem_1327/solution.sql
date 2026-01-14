SELECT
    b.product_name,
    a.unit
FROM (
    SELECT DISTINCT
        product_id,
        SUM(unit) OVER (PARTITION BY product_id) AS unit
    FROM
        Orders
    WHERE
        TO_CHAR(order_date, 'YYYY-MM') = '2020-02'
) a
INNER JOIN
   Products b
ON
    a.product_id = b.product_id
WHERE
    a.unit >= 100;
