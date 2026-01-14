CREATE TABLE students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR
);
INSERT INTO students
VALUES
(1, 'Alice'),
(2, 'Bob'),
(13, 'John'),
(6, 'Alex');

CREATE TABLE subjects (
    subject_name VARCHAR PRIMARY KEY
);
INSERT INTO subjects
VALUES
('Math'), ('Physics'), ('Programming');

CREATE TABLE examinations (
    student_id INT,
    subject_name VARCHAR
);
INSERT INTO examinations
VALUES
(1, 'Math'),
(1, 'Physics'),
(1, 'Programming'),
(2, 'Programming'),
(1, 'Physics'),
(1, 'Math'),
(13, 'Math'),
(13, 'Programming'),
(13, 'Physics'),
(2, 'Math'),
(1, 'Math');
