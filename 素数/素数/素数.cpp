//Ҫ���100-200֮��������ͱ���Ҫ����صĸ���
//����ָ�ľ�����ֻ�ܹ���1�ͱ�����������
//�������������ֵΪx,��ô����Ҫ�ﵽ�������ȥ��2-(x-1)����,�����ж����Ƿ�Ϊ����
#include<stdio.h>
#include<windows.h>
int isprime(int x)//���prime����˼Ϊ����,xΪ��ʽ����
{
	int num = 2;//��num��һ��һ��������
	while (num < x)
	{
		if (x%num == 0)
		{
			return 0;//��c������һ���ò�����������0,����һ�㷵��1
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