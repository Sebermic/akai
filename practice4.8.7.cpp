#include<stdio.h>
#include<float.h>
int main(void)
{
	float a = 1.0/3.0 ;
	double b = 1.0/3.0 ;
	printf("float values:");
	printf("%.6f %.12f %.16f\n",a,a,a);
	printf("%.6f %.12f %.16f\n",b,b,b);
	printf("FLT_DIG: %d\n",FLT_DIG);
	printf("DBL_DIG: %d\n",DBL_DIG);
	
	return 0 ;
}
