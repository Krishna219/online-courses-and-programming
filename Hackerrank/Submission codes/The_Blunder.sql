/*
Enter your query here.
*/
/*SELECT CONVERT(REPLACE(STR(salary),'0',''),INTEGER) FROM employees;*/
select ceil(avg(salary) - avg(replace(salary, 0, ''))) from employees