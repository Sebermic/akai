#include<stdio.h>
int main(void)
{
	float num = 21.2900;
	printf("The input is %.1f or %.1e.\n",num,num);
	printf("The input is %+0.3f or %.3e.",num,num);
	
	return 0;
}
