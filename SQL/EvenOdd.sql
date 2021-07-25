declare 
n number:=&n;
begin
if mod(n,2)=0 then
dbms_output.put_line('number is even');
else
dbms_output.put_line('number is odd');
end if;
end;
/
