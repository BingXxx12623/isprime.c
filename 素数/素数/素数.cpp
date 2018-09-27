//要输出100-200之间的素数就必须要理解素的概念
//素数指的就是你只能够被1和本身整除的数
//假设这个素数的值为x,那么就需要达到让这个数去除2-(x-1)的数,进而判断它是否为素数
#include<stdio.h>
#include<windows.h>
int isprime(int x)//这儿prime的意思为素数,x为形式参数
{
	int num = 2;//用num来一个一个被整除
	while (num < x)
	{
		if (x%num == 0)
		{
			return 0;//在c语言中一般用不满足来返回0,满足一般返回1
		}
		num++;
	}
	return 1;
}
int main()
{
	int i = 100;
	while (i < 200) {
		if (isprime(i) == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	system("pause");
	return 0;
}