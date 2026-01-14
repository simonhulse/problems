SELECT
    query_name,
    ROUND(AVG(rating::NUMERIC / position), 2) AS quality,
    ROUND(100 * AVG((rating < 3)::INT), 2) AS poor_query_percentage
FROM
    Queries
GROUP BY
    query_name;
