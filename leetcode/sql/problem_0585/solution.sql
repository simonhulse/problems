-- >>> SOLUTION 1 >>>
WITH tiv_2015_filter AS (
    SELECT
        pid,
        tiv_2016
    FROM (
        SELECT
            pid,
            tiv_2016,
            COUNT(*) OVER (PARTITION BY tiv_2015) n_matching
        FROM
            Insurance
    ) AS cnt
    WHERE
        cnt.n_matching > 1
),
lat_lon_filter AS (
    SELECT
        pid,
        tiv_2016
    FROM (
        SELECT
            pid,
            tiv_2016,
            COUNT(*) OVER (PARTITION BY (lat, lon)) n_matching
        FROM
            Insurance
    ) AS cnt
    WHERE
        cnt.n_matching = 1
)
SELECT
    ROUND(SUM(a.tiv_2016)::NUMERIC, 2) AS tiv_2016
FROM
    tiv_2015_filter a
INNER JOIN
    lat_lon_filter b
ON
    a.pid = b.pid;
-- <<< SOLUTION 1 <<<

-- >>> SOLUTION 2 >>>
SELECT
    SUM(tiv_2016) AS tiv_2016
FROM
    Insurance
WHERE tiv_2015 IN (
    SELECT
        tiv_2015
    FROM
        Insurance
    GROUP BY
        tiv_2015
    HAVING
        COUNT(*) > 1
) AND
(lat, lon) IN (
    SELECT
        lat,
        lon
    FROM
        Insurance
    GROUP BY
        (lat, lon)
    HAVING
        COUNT(*) = 1
);
-- <<< SOLUTION 2 <<<
