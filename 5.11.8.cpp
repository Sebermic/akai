#include<stdio.h>
int main()
{
	int firstnum,secnum,result ;
	printf("This program computer moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&secnum);
	printf("Now enter the first operand:");
	scanf("%d",&firstnum);
	while (firstnum>0)
	{
		result=firstnum%secnum;
		printf("%d %% %d is %d\n",firstnum,secnum,result);
		printf("Enter next number for first operand(<= 0 to quit): ");
		scanf("%d",&firstnum);
		
	}
	printf("Done\n");
	return 0 ;
	
}
