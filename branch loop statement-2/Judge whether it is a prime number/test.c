#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//����2��i-1֮������֣��ǲ���������ȥ�Գ�i
//		//�����������˵��i�������������2��i-1֮�������û��һ��������i���Ǿ�˵��i������
//		int j = 2;
//		while (j < i)
//		{
//			//��j�Գ�i
//			if ( i%j == 0 )
//			{
//				break;
//			}
//			j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF - end of file -�ļ�������־ -�����ļ�ĩβ
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", input);
//	printf("��ȷ������(Y/N):>");
//	//��ջ�����
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue
//			;
//		printf("%d ", i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}


//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		//����n�Ľ׳�
//		ret = 1;//��1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}