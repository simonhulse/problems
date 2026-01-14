CREATE TYPE yn AS ENUM ('Y', 'N');
CREATE TABLE products (
    product_id INT PRIMARY KEY,
    low_fats yn,
    recyclable yn
);
INSERT INTO products (product_id, low_fats, recyclable) VALUES
(0, 'Y', 'N'),
(1, 'Y', 'Y'),
(2, 'N', 'Y'),
(3, 'Y', 'Y'),
(4, 'N', 'N');
