#include<stdio.h>
int main(void)
{
	float v;         //  �ٶ�  Mb/s 
	float size;      //  �ļ���СMB 
	float s,t;         //  ��λ������ļ���С Mb  
	printf("Enter your download speed :\n");
	scanf("%f",&v);
	printf("Enter your file size :\n");
	scanf("%f",&size);
	s =size*8;
	t =s/v ;
	printf("At %.2f megabits per second, a file of %.2f megabytes \n"
	"downloads in %.2f seconds. ",v,size,t);
	
	return 0;
	 
}
