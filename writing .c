#include<stdio.h>

int main()
{
	int *p;
	char data[1000];
	
	p = fopen("demo.txt","w");
	
	if(p==0)
	{
		printf("File could not open");
	}
	else
	{
		printf("enter data :- ");
		gets(data);
		fputs(data,p);
		printf("data add successful.....");
	}
	fclose(p);
	return 0;
}