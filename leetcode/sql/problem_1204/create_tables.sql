CREATE TABLE Queue (
    person_id INT UNIQUE,
    person_name VARCHAR,
    weight INT,
    turn INT UNIQUE
);
INSERT INTO Queue
VALUES
(5, 'Alice', 250, 1),
(4, 'Bob', 175, 5),
(3, 'Alex', 350, 2),
(6, 'John Cena', 400, 3),
(1, 'Winston', 500, 6),
(2, 'Marie', 200, 4);
