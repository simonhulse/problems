SELECT
    a.machine_id,
    ROUND(AVG(b.timestamp - a.timestamp)::NUMERIC, 3) AS processing_time
FROM
    (SELECT * FROM Activity WHERE activity_type = 'start') a
JOIN
    (SELECT * FROM Activity WHERE activity_type = 'end') b
ON
    a.machine_id = b.machine_id AND a.process_id = b.process_id
GROUP BY
    a.machine_id;
