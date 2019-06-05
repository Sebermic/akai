#include<stdio.h>
#include<string.h>
int main(void)
{
	char fname[10];
	char lname[10];
	printf("Enter your first name :\n");
	scanf("%s",fname);
	printf("Enter your last name :\n");
	scanf("%s",lname);
	printf("%7s %8s\n",fname,lname);
	printf("%7d %8d\n",strlen(fname),strlen(lname));
	printf("%7s %8s\n",fname,lname);
	printf("%-7d %-8d\n",strlen(fname),strlen(lname));
	
	return 0;
}
