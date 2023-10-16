use midterm;
-- Q1
Select Sum(credits) AS Total_GP
from enrollment
where studentId = 202; 

-- Q2

Select course.courseId,c_name
from enrollment join course
where enrollment.courseId= course.courseId and studentId =(select studentId from student where s_name like 'Morris' );

-- Q3 
Select distinct  student.studentId,s_name,CourseId
from enrollment join student 
where enrollment.studentId = student.studentId and courseId in(select courseId from course where dept like "CSE");

-- Q4
Select distinct  student.studentId,s_name,CourseId
from enrollment join student
where enrollment.studentId = student.studentId and 
student.studentId IN (select e1.studentId from enrollment as e1 join enrollment as e2 where e1.studentId = e2.studentId and e1.courseId like "CS%" and e2.courseId like "ME%");