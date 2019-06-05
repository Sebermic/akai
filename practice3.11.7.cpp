#include<stdio.h>
int main(void)
{
	float inches;
	float stature;
	float centimeters = 2.54;
	printf("Please enter your stature: ");
	scanf("%f",&inches);
	stature = centimeters*inches ;
	printf("your stature is %f.\n",stature);
	return 0;
}
