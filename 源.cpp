#include<stdio.h>
int main()
{
	int a = 0;//�����ĸ�������ʼΪ0
	int num = 0;//��ʼֵΪ0
	printf("������һ������");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			a++;//�����ĸ�����1
		}
	}
	if (a == 0)
	{
		printf("%d��һ��������\n", num);
	}
	else
	{
		printf("%d����һ��������\n", num);
	}
	return 0;

}