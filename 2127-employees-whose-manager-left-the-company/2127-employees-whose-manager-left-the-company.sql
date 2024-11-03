# Write your MySQL query statement below
select e.employee_id from Employees e left join Employees e1 on e1.employee_id=e.manager_id
where e.salary<30000 and e.manager_id is not null and e1.employee_id is null
order by employee_id