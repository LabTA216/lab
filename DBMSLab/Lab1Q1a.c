#include<stdio.h>
struct data{
    int sch;
    char name[50];
    char branch[10];
    char address[50];
    int age;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;

};
int main()
{
    struct data s1={1,"Akshat","cse","h4",18,4,5,6,7,8};
    struct data s2={2,"Rishabh","cse","h4",19,5,6,7,8,9};
    struct data s3={3,"Narendre","cse","h4",18,5,6,7,8,6};
    struct data s4={4,"bittu","cse","h4",18,9,5,6,7,4};
    struct data s5={5,"Shushant","cse","h4",20,10,9,8,8,8};
    FILE *fp;
    fp=fopen("student.txt","w");
   
        fprintf(fp,"%d %s %s %s %d %d %d %d %d %d\n",s1.sch,s1.name,s1.branch,s1.address,s1.age,s1.marks1,s1.marks2,s1.marks3,s1.marks4,s1.marks5);
        fprintf(fp,"%d %s %s %s %d %d %d %d %d %d\n",s2.sch,s2.name,s2.branch,s2.address,s2.age,s2.marks1,s2.marks2,s2.marks3,s2.marks4,s2.marks5);         
        fprintf(fp,"%d %s %s %s %d %d %d %d %d %d\n",s3.sch,s3.name,s3.branch,s3.address,s3.age,s3.marks1,s3.marks2,s3.marks3,s3.marks4,s3.marks5);
        fprintf(fp,"%d %s %s %s %d %d %d %d %d %d\n",s4.sch,s4.name,s4.branch,s4.address,s4.age,s4.marks1,s4.marks2,s4.marks3,s4.marks4,s4.marks5);
        fprintf(fp,"%d %s %s %s %d %d %d %d %d %d\n",s5.sch,s5.name,s5.branch,s5.address,s5.age,s5.marks1,s5.marks2,s5.marks3,s5.marks4,s5.marks5);
    fclose(fp);    
    
    
    return 0;
}
