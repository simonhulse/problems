SELECT managers.name
FROM
    (
        SELECT
            managerId
        FROM
            Employee
        GROUP BY
            managerId
        HAVING
            COUNT(*) >= 5
    ) qualified_managers
INNER JOIN
    Employee managers
ON
    qualified_managers.managerId = managers.id;
