#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#if  0

问题 1： 3 * x*x - 4 * x * 6 此表达式合法，3和x的平方的乘积减去20与x的乘积；
问题 7： while循环语句没有加大括号，所以putchar只会打印最后的EOF。

#endif


//void SquareRoot(float n)                                  /*1,求正数n的平方根*/
//{
//	float firstvalue = 1;
//	float value = 0;
//	if (n <= 0)
//	{
//		printf("该整数没有平方根\n");
//	}
//	else
//	{
//		while (1)
//		{
//			value = (firstvalue + (n / firstvalue)) / 2;
//			if (value != firstvalue)
//			{
//				firstvalue = value;
//				printf("%f\n", value);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	printf("平方根为：%f\n", value);
//}
//
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	SquareRoot(n);
//	return 0;
//}


//int substr(char *dst, char *src, int start, int len,int src_len)        /*将一个字符串的一部分复制*/
//{
//	int i = 0;
//	if (start >= src_len || start < 0 || len < 0)
//	{
//		*dst = '\0';
//		return strlen(dst);
//	}
//	else
//	{
//		for (; i < len; i++)
//		{
//			if (i + start < src_len)
//			{
//				dst[i] = src[i + start];
//			}
//			else
//			{
//				break;
//			}
//		}
//		dst[i] = '\0';
//	}
//	return strlen(dst);
//}
//
//int main()
//{
//	char src[] = "hello world";
//	char dst[128] = {0};
//	printf("%s\nlen=%d", dst, substr(dst, src, 3, 5, strlen(src)));
//	return 0;
//}


//void deblank(char *string)                          /*删除字符串中多余的空格*/
//{
//	for (int i = 0; string[i] != '\0'; i++)
//	{
//		if (string[i] == ' '&&string[i+1] == ' ')
//		{
//			for (int j = i; string[j] != '\0'; j++)
//			{
//				string[j] = string[j + 1];
//			}
//			i -= 1;
//		}
//	}
//	printf("%s\n", string);
//}
//
//int main()
//{
//	char string[] = "hello  world  sir";
//	deblank(string);
//	return 0;
//}