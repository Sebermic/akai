#include<stdio.h>
void Temperatures(float farenheit);
int main ()
{
	printf("Please enter a temperature in farenheit:(enter q to quit)");
	scanf("%f",&farenheit);
	while(farenheit>0)
	{
		Temperatures(farenheit);
		printf("Please enter a temperature in farenheit:(enter q to quit)\n");
		
	}
	printf("Done");
	return 0 ;
	
}
void Temperatures(float farenheit)
{
	float celsius;
	float kelvin;
	const float left = 32.0;
	const float add = 273.16;
	celsius =5.0/9.0 *(farenheit-left);
	kelvin = celsius + add ;
	printf("farenheit:%.2f\ncelsius:%.2fkelvin:%.2f\n",farenheit,celsius,kelvin);
}
