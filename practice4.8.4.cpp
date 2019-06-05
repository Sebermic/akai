#include<stdio.h>
int main(void)
{
	float height ;
	char name[20] ;
	printf("Enter your height:\n");
	scanf("%f",&height);
	printf("Enter your name:\n");
	scanf("%s",name);
	printf("%s,you are %.3f feet tall",name,height);
	
	return 0;
} 
