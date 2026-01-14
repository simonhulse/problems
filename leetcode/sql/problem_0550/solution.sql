SELECT
    ROUND(SUM(CASE WHEN a.player_id IS NOT NULL THEN 1 ELSE 0 END)::NUMERIC / COUNT(*), 2)
        AS fraction
FROM
    Activity a
RIGHT JOIN (
    SELECT
        player_id,
        (MIN(event_date) + INTERVAL '1 day') AS initial_login_plus_1
    FROM
        Activity
    GROUP BY
        player_id
) b
ON
    a.player_id = b.player_id
    AND a.event_date = b.initial_login_plus_1;
