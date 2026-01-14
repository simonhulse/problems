CREATE TABLE Product (
    product_key INT PRIMARY KEY
);
INSERT INTO Product
VALUES
(5), (6);

CREATE TABLE Customer (
    customer_id INT NOT NULL,
    product_key INT REFERENCES Product(product_key)
);
INSERT INTO Customer
VALUES
(1, 5),
(2, 6),
(3, 5),
(3, 6),
(1, 6);
