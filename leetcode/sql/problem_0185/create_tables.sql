CREATE TABLE Department (
    id INT PRIMARY KEY,
    name VARCHAR
);
INSERT INTO Department (id, name)
VALUES
(1, 'IT'),
(2, 'Sales');

CREATE TABLE Employee (
    id INT PRIMARY KEY,
    name VARCHAR,
    salary INT,
    departmentId INT REFERENCES Department(id)
);
INSERT INTO Employee
VALUES
(1, 'Joe', 85000, 1),
(2, 'Henry', 80000, 2),
(3, 'Sam', 60000, 2),
(4, 'Max', 90000, 1),
(5, 'Janet', 69000, 1),
(6, 'Randy', 85000, 1),
(7, 'Will', 70000, 1);
