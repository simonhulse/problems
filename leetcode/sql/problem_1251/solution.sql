SELECT
    p.product_id,
    COALESCE(ROUND(SUM(p.price * s.units)::NUMERIC / SUM(s.units), 2), 0.00)
        AS average_price
FROM
    prices p
LEFT JOIN
    UnitsSold s
ON
    s.product_id = p.product_id AND
    s.purchase_date >= p.start_date AND
    s.purchase_date <= p.end_date
GROUP BY
    p.product_id;
