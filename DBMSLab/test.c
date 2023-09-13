#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

/* This will look the file in the directory where this C program file is stored */
FILE *frplus = fopen("student.txt", "r+"); /* Opens the file for reading/writing/modification */

char ch;

/* If the searched file is not found, the program exits */
if(frplus==NULL)
{
        printf("can not open target file\n");
        exit(1);
}

/* If the file is found */
while(1)
{
	ch = fgetc(frplus);
	if(ch=='Z')
	{
		printf("%c", ch); 
		fseek(frplus, -1, SEEK_CUR);
		fputc('e', frplus);
		fseek(frplus, 0, SEEK_CUR);	
	}
	if(ch == EOF)
		break;
}
fclose(frplus);

return 0;
}