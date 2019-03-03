#include<stdio.h>
#include<string.h>


//char const *my_strrchr(char const *str, int ch)                    
//{
//	char const *p = str;
//	while (*str++);
//	while (str-- != p && *str != ch);
//	if (*str == ch)
//	{
//		return str;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char const *str = "abcdbf";
//	char const *p = my_strrchr(str, 'b');
//	if (NULL == p)
//	{
//		printf("find error\n");
//	}
//	else
//	{
//		printf("%p\n", p);
//	}
//	return 0;
//}


//char const *my_strnchr(char const *str, int ch, int which)
//{
//	int n = 0;
//	char const *p = str;
//	while (*str++)
//	{
//		if (*str == ch)
//		{
//			n++;
//			p = str;
//		}
//		if (n == which)
//		{
//			return p;
//		}
//	}
//	return NULL;
//}
//
//int main()
//{
//	char const *str = "abcbdebf";
//	char const *q = my_strnchr(str, 'b',2);
//	if (NULL == q)
//	{
//		printf("find error\n");
//	}
//	else
//	{
//		printf("%p\n", q);
//	}
//	return 0;
//}


//int count_chars(char const *str, char const *chars)
//{
//	int count = 0;
//	while (*chars)
//	{
//		char const *p = str;
//		while (*p)
//		{
//			if (*p == *chars)
//			{
//				count++;
//			}
//			p++;
//		}
//		chars++;
//	}
//	return count;
//}
//
//int main()
//{
//	char const *str = "abcbdef";
//	char const *chars = "abcd";
//	printf("%d",count_chars(str, chars));
//	return 0;
//}


void Myitoa(char *str, int num, int radix)                  /*将数字num转成给定的进制radix的字符串*/
{
	int trade = num / radix;
	int remainder = num%radix;
	char *p = str;
	char *q = str;
	while (trade != 0)
	{
		*str++ = remainder + '0';
		remainder = trade%radix;
        trade /= radix;
	}

	*str = remainder + '0';

	while (*q != '\0')
	{
		if (*q > '9')
		{
			*q += 39;
		}
		q++;
	}

	while (p < str)
	{
		char tmp = *p;
		*p = *str;
		*str = tmp;
		p++;
		str--;
	}

}

int main()
{
	char str[128] = "0";
    int num = 10;
	Myitoa(str, num, 16);
	printf("%s\n", str);
	return 0;
}