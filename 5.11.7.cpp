#include<stdio.h>
void showcube(double x);
int main ()
{
	double val;
	printf("Enter a value:");
	scanf("%lf",&val);
	showcube(val);
	return 0;
}
void showcube(double x)
{
	printf("The cube of %e is %e.\n",x,x*x*x);
}
