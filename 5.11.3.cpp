#include<stdio.h>
#define PERWEEK 7
int main()
{
	int days,weeks,ldays;
	printf("Enter the number of days:");
	scanf("%d",&days);
	while (days > 0)
	{
	    weeks = days / PERWEEK ;
	    ldays = days % PERWEEK ;
	    printf("%d days are %d weeks,%ldays.\n",days,weeks,ldays);
	    printf("Enter again(0 or less to end):");
	    scanf("%d",&days);
    }
    printf("Done!\n");
	return 0 ;
}

