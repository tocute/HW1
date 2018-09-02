#include <stdio.h>
#include <math.h>
int main(void)
{

	float x1=0,x2=0;
	int a=0,b=0,c=0;
	int m=0;

	printf("歐比王給了一個等式ax^2+bx+c=0\n要你輸入a,b,c值以計算x值。a,b,c皆為整數。\n"); 	
	printf("請依序輸入a,b,c值,中間以空格隔開:"); 
	scanf("%d %d %d",&a,&b,&c);
	printf("\n你輸入的是%d,%d,%d\n",a,b,c);

	m=pow(b,2)-4*a*c;    //判別式 
	
	if(m==0)             //判別式=0 有唯一解(重根) 
	{
		x1=-b/(2*a);
		printf("x=%.0f\n",x1);
	}
	else if(m>0)         //判別式>0 有兩解(實根) 
	{
		x1=(-b+sqrt(m))/(2*a);
		x2=(-b-sqrt(m))/(2*a);
		printf("得到兩個解,取小數點後兩位,分別為%.2f,%.2f\n",x1,x2);
	}
	else				//判別式<0  無解(虛根不計) 
	{
		printf("x值無解。\n");  
	} 
	
	return 0;
}
