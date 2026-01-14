CREATE TABLE Employee (
    id INT PRIMARY KEY,
    name VARCHAR,
    department VARCHAR,
    managerId INT
);
INSERT INTO Employee
VALUES
(101, 'John', 'A', null),
(102, 'Dan', 'A', 101),
(103, 'James', 'A', 101),
(104, 'Amy', 'A', 101),
(105, 'Anne', 'A', 101),
(106, 'Ron', 'B', 101);
