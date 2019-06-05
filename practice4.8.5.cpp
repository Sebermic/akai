#include<stdio.h>
int main(void)
{
	float v;         //  速度  Mb/s 
	float size;      //  文件大小MB 
	float s,t;         //  单位换算后文件大小 Mb  
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
