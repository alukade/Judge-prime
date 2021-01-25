#include<stdio.h>
int main()
{
	int a = 0;//素数的个数，初始为0
	int num = 0;//初始值为0
	printf("请输入一个数：");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			a++;//素数的个数加1
		}
	}
	if (a == 0)
	{
		printf("%d是一个素数。\n", num);
	}
	else
	{
		printf("%d不是一个素数。\n", num);
	}
	return 0;

}