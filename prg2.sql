create database prg2;

use prg2;

create table player(pid int primary key, pname varchar(20), page int , pphone bigint, tid int primary key references team(tid));

create table team(tid int primary key, tname varchar(20), tcity varchar(20), tcoach varchar(20), tcaptain varchar(20));

create table stadium (sid int primary key, sname varchar(20), saddress varchar(30));

create table matches( mid int primary key, t1 int references team(tid), t2 int references team(tid), mom int references player(pid), mdate date);

create table conduct(sid int references stadium(sid), mid int references matches(mid), tw int references team(tid));

select p.pname,p.page, t.tname from player p,team t where p.page in(select min(page) from player) and p.tid=t.tid;

select * from stadium where sid in(select sid from conduct group by sid having count(sid)=(select max(g) from (select count(sid)g from conduct group by sid) as m));

select * from player where pid in(select mom from matches group by mom having count(mom)>=2) and pname not in (select tcaptain from team);

select * from team where tid in(select tw from conduct group by tw having count(tw)=(select max(g) from(select count(tw)g from conduct group by tw)as m));

select * from team where tid in (select tw from conduct group by tw having count(distinct(sid))=1 and count(sid)>1);