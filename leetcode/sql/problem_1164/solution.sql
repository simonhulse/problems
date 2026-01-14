SELECT
    prods.product_id,
    COALESCE(changes.new_price, 10) AS price
FROM (
    SELECT
        ROW_NUMBER() OVER (PARTITION BY product_id ORDER BY change_date DESC) AS rn,
        product_id,
        new_price
    FROM
        Products
    WHERE
        change_date <= '2019-08-16'
) changes
RIGHT JOIN (
    SELECT
        DISTINCT product_id
    FROM
        Products
) prods
ON
    changes.product_id = prods.product_id
WHERE
    changes.rn = 1 OR changes.rn IS NULL;
