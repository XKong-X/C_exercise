#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num % 2 == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int s = 0;
//	int sum = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		scanf("%d", &s);
//		if (s > sum)
//		{
//			sum = s;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int s[3] = {0};
//	while (~scanf("%d %d %d", &s[0], &s[1], &s[2]))
//	{
//		int sum = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			if (s[i] > sum)
//			{
//				sum = s[i];
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	while (~scanf(" %c", &ch))
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	while (~scanf("%c\n", &ch))
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//#include <ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))//�⺯��isalpha�����ж���ĸ�����򷵻�һ�����������1��
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c", ch + 32);
//		}
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//#include <ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))//�⺯��islower�����ж�Сд��ĸ�����򷵻�һ�����������1��
//		{
//			printf("%c\n", toupper(ch));//�⺯��toupper������Сд��ĸתΪ��д��ĸ
//		}
//		else if (isupper(ch))//�⺯��isupper�����жϴ�д��ĸ�����򷵻�һ�����������1��
//		{
//			printf("%c\n", tolower(ch));//�⺯��toupper��������д��ĸתΪСд��ĸ
//		}
//		getchar();
//	}
//	return 0;
//}
//
//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (0 == t)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d",&a,&b,&c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral trianqle!\n");
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("Isosceles trianqle!\n");
//			}
//			else
//			{
//				printf("Ordinary trianqle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a trianqle!\n");
//		}
//	}
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}
//
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct Book b = { "C����","C20231112",55 };
//	struct Book* pb = &b;
//
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("�۸�%d\n", pb->price);
//
//	//printf("������%s\n", (*pb).name);
//	//printf("��ţ�%s\n", (*pb).id);
//	//printf("�۸�%d\n", (*pb).price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);
//	//printf("�۸�%d\n", b.price);
//	return 0;
//}
//