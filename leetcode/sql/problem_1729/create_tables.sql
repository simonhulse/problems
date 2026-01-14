CREATE TABLE Followers (
    user_id INT,
    follower_id INT,
    PRIMARY KEY (user_id, follower_id)
);
INSERT INTO Followers
VALUES
(0, 1),
(1, 0),
(2, 0),
(2, 1);
