# Write your MySQL query statement below
select e1.name as Employee from Employee as e left join employee as e1 on e.id=e1.managerId where e.salary<e1.salary