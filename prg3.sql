create database prg3;

use prg3;

create table employee(eid int primary key, ename varchar(20), address varchar(30),phno bigint, dno int references department(dno));

create table department(dno int primary key,dname varchar(20),dloc varchar(30),manager varchar(30));

create table dependent(dename varchar(20), gender varchar(10), age int, dadd varchar(30), eid int references employee(eid));

create table project(pno int primary key, pname varchar(20), ploc varchar(20), dno int references department(dno));

create table workson(eid int references employee(eid), pno int references project(pno), hours int);

select * from employee where eid in(select eid from workson where pno=5 and eid in (select eid from workson where pno=10));

select * from employee where eid in(select eid from dependent group by eid having count(eid)>=2);

select * from project where pno in(select pno from workson group by pno having count(pno)=(select max(g) from (select count(pno)g from workson group by pno)as m));

select * from employee where eid not in(select eid from dependent);

select * from employee where eid in(select eid from workson group by eid having sum(hours)=(select max(g) from(select sum(hours)g from workson group by eid)as m)); 

create view v as select count(eid),dno from employee group by dno;

select * from v;