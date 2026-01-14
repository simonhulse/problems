SELECT
    r.contest_id,
    ROUND(100 * COUNT(*)::NUMERIC / (SELECT COUNT(*) FROM users), 2)
        AS percentage
FROM
    users u
RIGHT JOIN
    register r
ON
    r.user_id = u.user_id
GROUP BY
    r.contest_id
ORDER BY
    percentage DESC,
    r.contest_id ASC;
