#include <stdio.h>
#include <math.h>
int main(void)
{

	float x1=0,x2=0;
	int a=0,b=0,c=0;
	int m=0;

	printf("�ڤ�����F�@�ӵ���ax^2+bx+c=0\n�n�A��Ja,b,c�ȥH�p��x�ȡCa,b,c�Ҭ���ơC\n"); 	
	printf("�Ш̧ǿ�Ja,b,c��,�����H�Ů�j�}:"); 
	scanf("%d %d %d",&a,&b,&c);
	printf("\n�A��J���O%d,%d,%d\n",a,b,c);

	m=pow(b,2)-4*a*c;    //�P�O�� 
	
	if(m==0)             //�P�O��=0 ���ߤ@��(����) 
	{
		x1=-b/(2*a);
		printf("x=%.0f\n",x1);
	}
	else if(m>0)         //�P�O��>0 �����(���) 
	{
		x1=(-b+sqrt(m))/(2*a);
		x2=(-b-sqrt(m))/(2*a);
		printf("�o���Ӹ�,���p���I����,���O��%.2f,%.2f\n",x1,x2);
	}
	else				//�P�O��<0  �L��(��ڤ��p) 
	{
		printf("x�ȵL�ѡC\n");  
	} 
	
	return 0;
}
