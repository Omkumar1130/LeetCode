# Write your MySQL query statement below
SELECT w1.name,w2.bonus FROM Employee w1 LEFT JOIN Bonus w2 ON w1.empId=w2.empId
WHERE w2.bonus < 1000 OR w2.bonus IS NULL;