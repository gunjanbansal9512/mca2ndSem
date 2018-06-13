create database prg5;

use prg5;

create table contest(canid int references candidate (canid),cid int references const(cid));

create table state(sid int primary key ,sname varchar(20));

create table party(pid int primary key,pname varchar(20),psym varchar(10));

create table candidate (canid int primary key,canname varchar(20),canph bigint,canage int,pid int references party(pid),sid int references state(sid));

create table voters(vid int primary key,vname varchar(20),vage int,vaddress varchar(30),cid int references const(cid));

create table constituency(cid int primary key,cname varchar(30),sid int references state(sid),no_of_voters int);

select * from candidate where canid in(select canid from (select canid,sid from contest c,constituency co where c.cid=co.cid) as m group by canid having count(distinct(sid))>1);

select * from state where sid in(select sid from constituency group by sid having count(cid)=(select max(g) from(select count(cid)g from constituency group by sid) as m));

/*create a procedure to insert tuple into voters table if voter age is greater then or equal to  18 else dispaly message not eligible*/
DELIMETER$$ 
create procedure 'insert_voters'(IN vid int, IN vname varchar(20),IN vage int,IN vaddress varchar(30),IN cid int)
BEGIN
if vage>=18 thens
insert into voters(vid,vname,vage,vaddress,cid) values (vid,vname,vage,vaddress,cid); 
else
select 'NOT Eligible';
end if;
end$$
DELIMETER;
/* create a procedure to display the number of voters in specified constituency where the name is passed as an argument to stored procedure*/

DELIMITER $$
create procedure 'display_voter'(IN c_name varchar(20))
BEGIN 
select no_of_voters from constituency where cname=c_name;
END$$
DELIMETER;

/*Calling of procedures*/
call display_voter('Kolar');

call insert_voters(1,'gunjan',23,'Bangalore',5);

call insert_voters(6,'Abhinav',16,'Up',10);

select * from voters;

CALL insert_voters (4,'SARAYNA',22,'KOLAR',5);

/*create a trigger to update the no of voters in constituency after inserting into voters table*/

DELIMETER$$
create trigger 'After_insert_votes' after insert on 'voters' for each row
BEGIN
update constituency set no_of_voters=no_of_voters+1 where cid=new.cid;
END$$
DELIMETER;
