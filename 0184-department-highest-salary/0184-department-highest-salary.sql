SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
FROM 
    Employee AS e
JOIN 
    Department AS d ON e.departmentId = d.id
WHERE 
    e.salary = (SELECT MAX(salary) 
                 FROM Employee 
                 WHERE departmentId = e.departmentId)
ORDER BY 
    d.name, e.salary DESC;
