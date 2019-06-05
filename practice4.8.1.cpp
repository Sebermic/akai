#include<stdio.h>
int main(void)
{
	char fname;
	char surname;
	printf("Please enter your first name:");
	scanf("%s %s",fname,surname);
	printf("Your name is %s,%s.\n",surname,fname);
	
	return 0;
}
