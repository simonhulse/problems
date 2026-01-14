WITH most_reviews AS (
    SELECT
        name
    FROM (
        SELECT
            user_id,
            COUNT(m.user_id) AS n_reviews
        FROM
            MovieRating m
        GROUP BY
            user_id
    ) review_count
    JOIN
        Users u
    ON
        review_count.user_id = u.user_id
    ORDER BY
        review_count.n_reviews DESC,
        name
    LIMIT
        1
),
best_feb_average AS (
    SELECT
        m.title
    FROM (
        SELECT
            movie_id,
            AVG(rating::NUMERIC) AS average
        FROM
            MovieRating
        WHERE
            TO_CHAR(created_at, 'YYYY-MM') = '2020-02'
        GROUP BY
            movie_id
    ) feb_ratings
    JOIN
        Movies m
    ON
        feb_ratings.movie_id = m.movie_id
    ORDER BY
        feb_ratings.average DESC,
        m.title
    LIMIT
        1
)
SELECT
    name AS results
FROM
    most_reviews
UNION ALL
SELECT
    title AS results
FROM
    best_feb_average;
