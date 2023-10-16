-- Lab 4  

show databases;
create database company2;
use company2;
create table Employee(
	Fname varchar(50) NOT NULL,
    Minit varchar(10),
    Lname varchar(50),
    SSN bigint NOT NULL,
    Bdate date,
    address varchar(100),
    Sex varchar(5),
    salary int,
    SuperSSN bigint,
    Dno int,
    PRIMARY KEY (SSN)
);
create table Department(
	Dname varchar(50),
	Dnumber int NOT NULL,
    Mgr_SSN bigint,
    Mgr_start_date date,
    PRIMARY KEY (Dnumber)
);
create table Dept_Locations(
	
	Dnumber int NOT NULL,
    Dlocation varchar(50),
    PRIMARY KEY (Dnumber)
);
create table Project(
	Pname varchar(50),
	Pnumber int NOT NULL,
    Dlocation varchar(50),
    Dnum int,
    PRIMARY KEY (Pnumber)
);
create table Works_On(
	Essn bigint,
    Pno int,
    Hours float
);
create table Dependent(
	Essn bigint NOT NULL,
    Fname varchar(50),
    Sex varchar(5),
    Bdate date,
    Relationship varchar(50)
);

