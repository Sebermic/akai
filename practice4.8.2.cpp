#include<stdio.h>
int main (void)
{
	char name[20];
	printf("Enter your name:");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("\"%7s\"",name);
	
	return 0;
	
}
