show databases;
create database Midterm;

use	Midterm;

create table student(
	studentId integer,
    s_name varchar(50) ,
    dept varchar(10),
	 primary key(studentId) 
);

create table Course(
	courseId varchar(10),
    c_name varchar(50) ,
    dept varchar(10),
    primary key(courseId)

);

create table Enrollment(
	courseId varchar(10),
    studentId integer,
    semester integer,
    credits integer

);

insert into student values (201,'James','CSE');
insert into student values (202,'Peter','CSE');
insert into student values (203,'Morris','ME');

insert into course values ('CS101','C++','CSE');
insert into course values ('CS102','JAVA','CSE');
insert into course values ('ME102','Drawing','ME');

insert into enrollment values ('CS101',201,1,4);
insert into enrollment values ('CS102',202,1,4);
insert into enrollment values ('CS102',203,1,3);
insert into enrollment values ('ME102',202,2,3);
insert into enrollment values ('ME102',203,2,3);