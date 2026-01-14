SELECT
    employee_id,
    name,
    reports_count,
    average_age
FROM
    Employees
RIGHT JOIN (
    SELECT
        reports_to AS manager_id,
        ROUND(AVG(age::NUMERIC)) AS average_age,
        COUNT(*) AS reports_count
    FROM
        Employees
    GROUP BY
        reports_to
    HAVING
        reports_to IS NOT NULL
) manager_info
ON
    manager_info.manager_id = employee_id
ORDER BY
    employee_id;
