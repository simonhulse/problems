CREATE TABLE Employee (
    empId INT PRIMARY KEY,
    name VARCHAR,
    supervisor INT,
    salary INT
);
INSERT INTO Employee
VALUES
(3, 'Brad', NULL, 4000),
(1, 'John', 3, 1000),
(2, 'Dan', 3, 2000),
(4, 'Thomas', 3, 4000);

CREATE TABLE Bonus (
    empId INT PRIMARY KEY,
    bonus INT,
    FOREIGN KEY (empId) REFERENCES Employee (empId)
);
INSERT INTO Bonus
VALUES
(2, 500),
(4, 2000);
