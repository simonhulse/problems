CREATE TYPE st AS ENUM ('approved', 'declined');
CREATE TABLE Transactions (
    id INT PRIMARY KEY,
    country VARCHAR,
    state st,
    amount INT,
    trans_date DATE
);
INSERT INTO Transactions
VALUES
(121, 'US', 'approved', 1000, '2018-12-18'),
(122, 'US', 'declined', 2000, '2018-12-19'),
(123, 'US', 'approved', 2000, '2019-01-01'),
(124, 'DE', 'approved', 2000, '2019-01-07');
