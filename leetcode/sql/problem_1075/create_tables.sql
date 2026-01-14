CREATE TABLE employee (
    employee_id INT PRIMARY KEY,
    name VARCHAR,
    experience_years INT NOT NULL
);
INSERT INTO employee
VALUES
(1, 'Khaled', 3),
(2, 'Ali', 2),
(3, 'John', 1),
(4, 'Doe', 2);

CREATE TABLE project (
    project_id INT,
    employee_id INT REFERENCES employee(employee_id),
    PRIMARY KEY (project_id, employee_id)
);
INSERT INTO project
VALUES
(1, 1),
(1, 2),
(1, 3),
(2, 1),
(2, 4);
