SELECT a.id AS id
FROM
    Weather a
JOIN
    Weather b
ON
    a.recordDate = b.recordDate + INTERVAL '1 days'
WHERE
    a.temperature > b.temperature;
