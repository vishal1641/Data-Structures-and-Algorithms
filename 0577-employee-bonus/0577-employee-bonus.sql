# Write your MySQL query statement below
select eu.name,b.bonus
from Employee as eu
left join Bonus as b
on eu.empID=b.empID
where b.bonus<1000 Or b.bonus is null
