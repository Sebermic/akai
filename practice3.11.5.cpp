#include<stdio.h>
int main(void)
{ 
	float x;
	float age;
	printf("Enter your age:");
	scanf("%f",&x);
	age=3.156e7*x;
	printf("Your age is %e.\n",age);
	
	return 0;
}
