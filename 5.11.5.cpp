#include <stdio.h>
int main ()                      //计算前20个整数的和  
{
	int count, sum,days ;             //声明  
	printf("enter the days:");
	scanf("%d",&days);
	count = 0 ;                   //表达式语句
	sum = 0 ;                     //表达式语句
	while (count++ < days)          //迭代语句  
	    sum = sum + count;
	printf("sum = %d\n",sum);      //表达式语句 
	
	return 0 ;                     //跳转语句	 
}  
