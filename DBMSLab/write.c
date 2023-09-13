#include<stdio.h>
#include<stdlib.h>
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
    struct student s[5];
    fp=fopen("student.txt","w");
    for(int i=0; i<5; i++){
        printf("NAME: ");
        scanf("%[^\n]%*c",s[i].name);
        printf("Scholar Number: ");
        scanf("%[^\n]%*c",s[i].sc);
        printf("Age: ");
        scanf("%[^\n]%*c",s[i].age);
        printf("Branch: ");
        scanf("%[^\n]%*c",s[i].branch);
        printf("Address: ");
        scanf("%[^\n]%*c",s[i].address);
        printf("Marks: ");
        scanf("%[^\n]%*c",s[i].marks);
        fwrite(&s[i],sizeof(struct student),1,fp);
    }
    fclose(fp);
    return 0;
}