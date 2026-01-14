CREATE TABLE customer (
    id INT PRIMARY KEY,
    name VARCHAR(10),
    referee_id INT
);
INSERT INTO customer (id, name, referee_id) VALUES
(1, 'Will', NULL),
(2, 'Jane', NULL),
(3, 'Alex', 2),
(4, 'Bill', NULL),
(5, 'Zack', 1),
(6, 'Mark', 2);
