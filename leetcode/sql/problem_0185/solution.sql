WITH rankings AS (
    SELECT
        name,
        departmentId,
        salary,
        DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS ranking
    FROM
        Employee
    ORDER BY
        departmentId,
        ranking
)
SELECT
    d.name AS "Department",
    r.name AS "Employee",
    r.salary AS "Salary"
FROM
    rankings r
LEFT JOIN
    Department d
ON
    r.departmentId = d.id
WHERE
    r.ranking <= 3;
