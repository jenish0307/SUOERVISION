#include<stdio.h>

int main()
{
	int *p;
	char data[1000];
	
	p = fopen("demo.txt","r");
	
	if(p==0)
	{
		printf("File could not open");
	}
	else
	{
		while(fgets(data,30,p)!=0)
		{
			printf(data);		
		}
	}
	fclose(p);
	return 0;
}