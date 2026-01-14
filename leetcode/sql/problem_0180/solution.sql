-- >>> SOLUTION 1 >>>
-- Using joins
SELECT
    DISTINCT l1.num AS ConsecutiveNums
FROM
    Logs l1
LEFT JOIN
    Logs l2
ON
    l1.id = l2.id - 1
LEFT JOIN
    Logs l3
ON
    l2.id = l3.id - 1
WHERE
    l1.num = l2.num AND l1.num = l3.num;
-- <<< SOLUTION 1 <<<

-- >>> SOLUTION 2 >>>
-- Using LEAD()
SELECT
    DISTINCT x1 AS ConsecutiveNums
FROM (
    SELECT
        num AS x1,
        LEAD(num, 1) OVER () AS x2,
        LEAD(num, 2) OVER () AS x3
    FROM
        Logs
) a
WHERE
    a.x1 = a.x2 AND a.x1 = a.x3;
-- <<< SOLUTION 2 <<<
