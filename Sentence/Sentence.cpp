#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#if  0

���� 1�� 3 * x*x - 4 * x * 6 �˱��ʽ�Ϸ���3��x��ƽ���ĳ˻���ȥ20��x�ĳ˻���
���� 7�� whileѭ�����û�мӴ����ţ�����putcharֻ���ӡ����EOF��

#endif


//void SquareRoot(float n)                                  /*1,������n��ƽ����*/
//{
//	float firstvalue = 1;
//	float value = 0;
//	if (n <= 0)
//	{
//		printf("������û��ƽ����\n");
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
//	printf("ƽ����Ϊ��%f\n", value);
//}
//
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	SquareRoot(n);
//	return 0;
//}


//int substr(char *dst, char *src, int start, int len,int src_len)        /*��һ���ַ�����һ���ָ���*/
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


//void deblank(char *string)                          /*ɾ���ַ����ж���Ŀո�*/
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