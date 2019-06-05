#include<stdio.h>
#define A 3.785 
#define B 1.609
int main()
{
	float miles,gallons ;
	float l,km ;
	float end ;
	l=gallons/A ;
	km=miles/B ;
	printf("enter your travel mileage:\n");
	scanf("%f",&miles);
	printf("enter your gasoline consumption:\n");
	scanf("%f",&gallons);
	end =l/(100*km);
	printf("the result is %.1f",end);
	
	return 0  ;
	
}
