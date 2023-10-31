# Write your MySQL query statement below
SELECT s.user_id, 
    ROUND(AVG(IF(c.action='confirmed',1,0)),2) as confirmation_rate 
from signups as s
left join confirmations as c 
on s.user_id = c.user_id
group by user_id

