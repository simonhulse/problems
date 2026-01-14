CREATE TABLE users (
    user_id INT PRIMARY KEY,
    user_name VARCHAR
);
INSERT INTO users
VALUES
(6, 'Alice'),
(2, 'Bob'),
(7, 'Alex');

CREATE TABLE register (
    contest_id INT,
    user_id INT,
    PRIMARY KEY (user_id, contest_id)
);
INSERT INTO register
VALUES
(215, 6),
(209, 2),
(208, 2),
(210, 6),
(208, 6),
(209, 7),
(209, 6),
(215, 7),
(208, 7),
(210, 2),
(207, 2),
(210, 7);
