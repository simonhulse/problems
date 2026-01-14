WITH n_student AS (
    SELECT
        COUNT(*) AS n
    FROM
        Seat
)
SELECT
    CASE
        WHEN id % 2 = 0 THEN id - 1
        WHEN id < (SELECT n FROM n_student) THEN id + 1
        ELSE id
    END AS id,
    student
FROM
    Seat
ORDER BY
    id;
