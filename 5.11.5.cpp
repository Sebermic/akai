#include <stdio.h>
int main ()                      //����ǰ20�������ĺ�  
{
	int count, sum,days ;             //����  
	printf("enter the days:");
	scanf("%d",&days);
	count = 0 ;                   //���ʽ���
	sum = 0 ;                     //���ʽ���
	while (count++ < days)          //�������  
	    sum = sum + count;
	printf("sum = %d\n",sum);      //���ʽ��� 
	
	return 0 ;                     //��ת���	 
}  
