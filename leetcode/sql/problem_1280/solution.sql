SELECT
    stud.student_id,
    stud.student_name,
    subj.subject_name,
    COUNT(exam.student_id) AS attended_exams
FROM
    students AS stud
CROSS JOIN
    subjects as subj
LEFT JOIN
    examinations as exam
ON
    exam.student_id = stud.student_id
    AND exam.subject_name = subj.subject_name
GROUP BY
    stud.student_id,
    stud.student_name,
    subj.subject_name
ORDER BY
    stud.student_id,
    subj.subject_name;
