CREATE TABLE Employees (
    employee_id INT PRIMARY KEY,
    name VARCHAR,
    reports_to INT,
    age INT
);
INSERT INTO Employees
VALUES
(9, 'Hercy', NULL, 43),
(6, 'Alice', 9, 41),
(4, 'Bob', 9, 36),
(2, 'Winston', NULL, 37);
