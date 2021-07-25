
create or replace trigger test1
before delete or insert or update on emp
for each row

declare
begin
insert into emp values(20,'chris',1000);
end;
/
