CREATE TABLE Employee (
    employee_id INT,
    department_id INT,
    primary_flag VARCHAR,
    PRIMARY KEY (employee_id, department_id)
);
INSERT INTO Employee
VALUES
(1, 1, 'N'),
(2, 1, 'Y'),
(2, 2, 'N'),
(3, 3, 'N'),
(4, 2, 'N'),
(4, 3, 'Y'),
(4, 4, 'N');
