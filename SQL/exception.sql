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
e number:=&e;
begin
select eno,ename,sal into empno,ename,sal from emp where eno=e;
dbms_output.put_line('Employee name is '||ename);
dbms_output.put_line('Employee id and sal is '||empno||' '||sal);
exception
when no_data_found then
dbms_output.put_line('No data found');
end;
/
