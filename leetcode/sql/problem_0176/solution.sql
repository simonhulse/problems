WITH salary_rank AS (
    SELECT DISTINCT
        salary,
        DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
    FROM
        Employee
)
SELECT
    MAX(salary) AS "SecondHighestSalary"
FROM
    salary_rank
WHERE
    rnk = 2;
