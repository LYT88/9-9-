#include<stdio.h>
int main()
{
	int i=1;
	for(i=1;i<=9;i++)//��ӡ9�� 
	{
		int j=1;
		for(j=1;j<=i;j++)//��ʾ��ӡ��ÿ�� 
		{
			printf("%d*%d=%-2d  ",j,i,j*i);//%-2d��ʾ���������     \tҲ����ͬЧ�� 
		}
		printf("\n");
	}
	return 0;
}
