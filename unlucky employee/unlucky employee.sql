CREATE PROCEDURE solution()
BEGIN
set @ROW_NUMBER = 0 ;
select final.Dep_name , final.emp_number ,coalesce(final.total_salary , '0' ) as total_salary 
from (
    select * , (@ROW_NUMBER := @ROW_NUMBER + 1) as rn 

    from (
        SELECT   Department.name as Dep_name , count(Employee.department) as emp_number , sum(Employee.salary) as total_salary 
        from Department LEFT outer JOIN Employee
        on Department.id = Employee.department
        GROUP by Department.id 
        HAVING emp_number < 6 
        ORDER by  total_salary DESC ,emp_number DESC ,Department.id ASC 
    ) as newtable  

) as final 
where MOD(final.rn , 2 ) = 1 ;
END
