#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch;
    fp=fopen("student.txt","r");
    while (1)
    {
         
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        printf("%c",ch);
        
    }
    fclose(fp);
    return 0;
}