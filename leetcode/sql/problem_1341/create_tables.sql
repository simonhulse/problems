CREATE TABLE Movies (
    movie_id INT PRIMARY KEY,
    title VARCHAR UNIQUE
);
INSERT INTO Movies
VALUES
(1, 'Avengers'),
(2, 'Frozen 2'),
(3, 'Joker');

CREATE TABLE Users (
    user_id INT PRIMARY KEY,
    name VARCHAR UNIQUE
);
INSERT INTO Users
VALUES
(1, 'Daniel'),
(2, 'Monica'),
(3, 'Maria'),
(4, 'James');

CREATE TABLE MovieRating (
    movie_id INT,
    user_id INT,
    rating INT,
    created_at DATE,
    PRIMARY KEY (movie_id, user_id)
);
INSERT INTO MovieRating
VALUES
(1, 1, 3, '2020-01-12'),
(1, 2, 4, '2020-02-11'),
(1, 3, 2, '2020-02-12'),
(1, 4, 1, '2020-01-01'),
(2, 1, 5, '2020-02-17'),
(2, 2, 2, '2020-02-01'),
(2, 3, 2, '2020-03-01'),
(3, 1, 3, '2020-02-22'),
(3, 2, 4, '2020-02-25');
