CREATE TABLE Queries (
    query_name VARCHAR,
    result VARCHAR,
    position INT CHECK (position BETWEEN 1 AND 500),
    rating INT CHECK (rating BETWEEN 1 AND 5)
);
INSERT INTO Queries
VALUES
('Dog', 'Golden Retriever', 1, 5),
('Dog', 'German Shepherd', 2, 5),
('Dog', 'Mule', 200, 1),
('Cat', 'Shirazi', 5, 2),
('Cat', 'Siamese', 3, 3),
('Cat', 'Sphynx', 7, 4);
