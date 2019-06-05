#include<stdio.h>
#define SCALE 2.54
int main()
{
	double centimeters,feets,inches;
	printf("Enter a height in centimeters:");
	scanf("%f",&centimeters);
	while (centimeters>0)
	{   
		inches = centimeters * SCALE ;
		feets = 12*inches;
		printf("%10.1f cm = %10.1f feet, %10.1f inches.\n",centimeters,feets,inches);
		printf("Enter a height in centimeters(<=0 to quit):\n");
		scanf("%f",&centimeters);
	}
	 printf("bye");
	 return 0 ;
}
