create database prg1;

use prg1;

create table author(aid int primary key, aname varchar(20), age int, country varchar(20));

create table book(boid int primary key,boname varchar(20),aid int references author(aid),publisher varchar(30),bid int references branch(bid));

create table borrow(usn int references student(usn),boid int references book(boid),bdate date);

create table branch (bid int primary key,bname varchar(20),hod varchar(20));

create table student(usn int primary key,sname varchar(30),address varchar(20),bid int references branch(bid),sem int);

select * from student where bid in (select bid from branch where bname='MCA') and sem=2;



select * from student where usn not in(select usn from borrow);

select s.usn,s.sname,b.bname,bo.boname,a.aid,br.bdate from student s,branch b,book bo,author a,borrow br where s.sem=2 and b.bname='MCA' and br.usn=s.usn and br.boid=bo.boid and s.bid=b.bid and bo.aid=a.aid;

select count(boid),aid from book group by aid;

select * from student where usn in(select usn from borrow group by usn having count(bid)>=2);

select s.usn,s.sname from student s,borrow br,book b,author a where s.usn=br.usn and br.boid=b.boid  and a.aid=b.aid group by s.usn having count(a.aid)>1;

select boname from book order by boname desc;

select s.usn,s.sname from student s,book b,borrow br where s.usn=br.usn and b.boid=br.boid group by s.usn having count(distinct(publisher))=1 and count(publisher)>1;