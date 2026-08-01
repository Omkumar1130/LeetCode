# Write your MySQL query statement below
SELECT w.machine_id,
 ROUND(AVG(w2.timestamp - w.timestamp),3) AS processing_time
FROM Activity w JOIN Activity w2 ON w.machine_id = w2.machine_id AND w.process_id =w2.process_id
WHERE w.activity_type ='start' AND w2.activity_type ='end'
GROUP BY machine_id;