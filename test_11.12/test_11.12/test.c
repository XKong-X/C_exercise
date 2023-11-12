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
