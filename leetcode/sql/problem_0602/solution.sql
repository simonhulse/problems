-- >>> SOLUTION 1 >>>
WITH n_requests AS (
    SELECT
        requester_id,
        COUNT(*)
    FROM
        RequestAccepted
    GROUP BY
        requester_id
),
n_accepts AS (
    SELECT
        accepter_id,
        COUNT(*)
    FROM
        RequestAccepted
    GROUP BY
        accepter_id
)
SELECT
    CASE
        WHEN r.requester_id IS NULL THEN a.accepter_id
        ELSE r.requester_id
    END AS id,
    COALESCE(r.count, 0) + COALESCE(a.count, 0) AS num
FROM
    n_requests r
FULL OUTER JOIN
    n_accepts a
ON
    r.requester_id = a.accepter_id
ORDER BY
    num DESC
LIMIT
    1;
-- <<< SOLUTION 1 <<<

-- >>> SOLUTION 2 >>>
SELECT
    id,
    COUNT(*) AS num
FROM (
    SELECT
        requester_id AS id
    FROM
        RequestAccepted
    UNION ALL
    SELECT
        accepter_id AS id
    FROM
        RequestAccepted
) AS ids
GROUP BY
    id
ORDER BY
    num DESC
LIMIT
    1;
-- <<< SOLUTION 2 <<<
