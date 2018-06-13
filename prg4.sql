create database prg4;
use prg4;
create table country(cid int primary key,cname varchar(20));
create table state(sid int primary key,sname varchar(20),capital varchar(20),cid int references country(cid));
create table tourist_place(tpid int primary key,tpname varchar(20),no_of_kms int,sid int references state(sid));
create table tourist(tid int primary key,tname varchar(20),tage int,cid int references country(cid));
create table visit(tid int references tourist(tid),tpid int references touristplace(tpid),dov date);
select * from state where sid in(select sid from tourist_place group by sid having count(sid)=(select max(g) from(select count(sid) g from tourist_place group by sid)as m));
select * from tourist_place where tp_id in(select tpid from visit group by tpid having count(tpid)=(select max(g) from(select count(tpid) g from visit group by tpid)as m));
select * from tourist where tid in(select tid from visit where tpid in(select tp_id from tourist_place where sid=1) group by tid having count(distinct(tpid))=2); 
select * from tourist where tid in(select tid from (select tid,tourist_place.sid from visit ,tourist_place where visit.tpid=tourist_place.tp_id) as m group by tid having count(distinct(sid))>=3);
select * from tourist_place where tp_id in(select tpid from (select cid,tpid from visit,tourist where visit.tid=tourist.tid)as m group by tpid having count(distinct(cid))>=3)