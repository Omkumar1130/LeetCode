# Write your MySQL query statement below
SELECT w1.id
FROM Weather w1 JOIN Weather w2 ON DATEDIFF(w1.recorddate,w2.recorddate) = 1
WHERE w1.temperature>w2.temperature;