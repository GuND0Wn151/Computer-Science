/* Employe table
       ENO ENAME                       SAL
---------- -------------------- ----------
      1111 rest                        111
         2 shyam                      1000
         3 raghu                      5000
         1 ram                        1111
*/

declare 
empno emp.eno%type;
ename emp.ename%type;
sal emp.sal%type;
cursor emp_cus is select eno,ename,sal from emp;
begin
open emp_cus;
loop
fetch emp_cus into empno,ename,sal;
exit when emp_cus%NOTFOUND;
dbms_output.put_line('Employee name is '||ename);
dbms_output.put_line('Employee id and sal is '||empno||' '||sal);
end loop;
end;
/
