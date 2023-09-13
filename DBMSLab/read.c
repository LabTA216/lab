#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char sc[255];
    char name[255];
    char branch[255];
    char age[255];
    char address[255];
    char marks[255];
};
int main(){
    FILE *fp=NULL;
    fp=fopen("student.txt","r");
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        fread(&s[i], sizeof(struct student),1,fp);
        printf("Name: %s\n",s[i].name);
        printf("Sc No. : %s\n",s[i].sc);
        printf("Age: %s\n",s[i].age);
        printf("Branch: %s\n",s[i].branch);
        printf("Address: %s\n",s[i].address);
        printf("Marks: %s\n",s[i].marks);
    }
    fclose(fp);
    return 0;
}