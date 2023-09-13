#include<stdio.h>
#include<string.h>
struct student{
    char sc[11];
    char name[100];
    char branch[20];
    char age[4];
    char address[100];
    char marks[5];
};
int main(){
    int index,c;
    char sc[11];
    FILE *fp=NULL;
    fp=fopen("student.txt","w");
    struct student s[5];
    printf("Enter Sc. No. of student: ");
    scanf("%s",sc);
    for (int i = 0; i < 5; i++)
    {
        int flag=0;
        flag=fread(&s[i], sizeof(struct student),1,fp);
        if(flag==0){
            printf("\n\nError occured in reading the file\n");
        }
        if(strcmp(s[i].sc,sc)==0){
            index=i;
        }
    }
    printf("Enter the choice to modify: \n1.Name\n2.Branch\n3.Age\n4.Address\n5.Marks\n");
    scanf("%d",&c);
    switch(c){
        case 1: printf("Enter the Name: ");
                scanf("%[^\n]%*c",s[index].name);
                break;
        case 2: printf("Enter the Branch: ");
                scanf("%[^\n]%*c",s[index].branch);
                break;
        case 3: printf("Enter the Age: ");
                scanf("%[^\n]%*c",s[index].age);
                break;
        case 4: printf("Enter the Address: ");
                scanf("%[^\n]%*c",s[index].address);
                break;
        case 5: printf("Enter the Marks: ");
                scanf("%[^\n]%*c",s[index].marks);
                break;
        default:
                printf("Invalid choice\n");
    }
    fp=freopen("student.txt", "w",fp);
    for(int i=0; i<5; i++){
        int flag=0;
        flag=fwrite(&s[i],sizeof(struct student),1,fp);
        if(flag==0){
            printf("Error occured\n\n");
        }
    }
    fclose(fp);
    return 0;
}