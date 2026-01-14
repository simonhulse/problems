SELECT
    salary_levels.category,
    COALESCE(cnt.accounts_count, 0) AS accounts_count
FROM
(
    SELECT
        account_specs.category,
        COUNT(*) AS accounts_count
    FROM (
        SELECT
            (
                CASE
                    WHEN income < 20000 THEN 'Low Salary'
                    WHEN income >= 20000 AND income <= 50000 THEN 'Average Salary'
                    ELSE 'High Salary'
                END
            ) AS category
        FROM
            Accounts
    ) AS account_specs
    GROUP BY
        account_specs.category
) AS cnt
RIGHT JOIN (
    SELECT * FROM (VALUES ('Low Salary'), ('Average Salary'), ('High Salary')) AS tmp(category)
) AS salary_levels
ON
    cnt.category = salary_levels.category;
