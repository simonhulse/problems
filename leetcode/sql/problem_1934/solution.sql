SELECT
    s.user_id,
    COALESCE(ROUND(SUM((c.action = 'confirmed')::INT::NUMERIC) / COUNT(c.user_id), 2), 0.00) AS confirmation_rate
FROM
    Signups s
LEFT OUTER JOIN
    Confirmations c
ON
    s.user_id = c.user_id
GROUP BY
    s.user_id;
