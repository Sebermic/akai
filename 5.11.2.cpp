#include<stdio.h>
int main ()
{
	int num,max;
	printf("Enter an integer:\n");
	scanf("d",& num);
	max=num+10;
	while(num++<=max)
	   printf("%d ",num);
	   
	return 0 ;   
}
