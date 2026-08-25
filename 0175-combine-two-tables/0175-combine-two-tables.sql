# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city,a.state
FROM Person P
LEFT JOIN Address A
ON P.personId= A.personId;