SELECT
    patient_id,
    patient_name,
    conditions
FROM
    Patients
WHERE
    conditions ~ '(^|\s)DIAB1';
