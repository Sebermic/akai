#include<stdio.h>
int main ()
{
	const int minperhour = 60 ;
	int minutes,hours,mins;
	printf("Enter the minutes to convert:");
	scanf("%d",&minutes);
	while(minutes > 0)
	{
		hours = minutes/minperhour;
		mins = minutes %  minperhour;
		printf("%d minutes = %d hours,%d minutes\n",minutes,hours,mins);
		scanf("%d",&minutes);
	}
	printf("Bye\n");
	
	return 0;
}
