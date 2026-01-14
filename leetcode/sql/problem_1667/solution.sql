SELECT
    user_id,
    UPPER(LEFT(name, 1)) || LOWER(SUBSTRING(name, 2, LENGTH(name))) AS name
FROM
    Users
ORDER BY
    user_id;
