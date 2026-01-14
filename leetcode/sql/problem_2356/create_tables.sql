CREATE TABLE Teacher (
    teacher_id INT,
    subject_id INT,
    dept_id INT,
    PRIMARY KEY (subject_id, dept_id)
);
INSERT INTO Teacher
Values
(1, 2, 3),
(1, 2, 4),
(1, 3, 3),
(2, 1, 1),
(2, 2, 1),
(2, 3, 1),
(2, 4, 1);
