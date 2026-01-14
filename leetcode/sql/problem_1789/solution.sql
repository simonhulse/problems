SELECT
    emp.employee_id,
    emp.department_id
FROM
    Employee emp
JOIN (
    SELECT
        employee_id,
        COUNT(*) AS cnt
    FROM
        Employee
    GROUP BY
        employee_id
) dept_count
ON
    emp.employee_id = dept_count.employee_id
WHERE
    dept_count.cnt = 1 OR emp.primary_flag = 'Y';
