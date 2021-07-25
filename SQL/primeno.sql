declare 
n number:=&n;
k number:=0;
i number;
begin
for i in 2..n-1
loop
if mod(n,i)=0 then
k:=1;
exit;
end if;
end loop;
if k=1 then
dbms_output.put_line('not prime');
else
dbms_output.put_line('prime');
end if;
end;
/
