#include<stdio.h>
#include<stdlib.h>

#if 0

问题：4     程序崩溃
问题：5     有，offset是变量，而3是个常量，变量占内存空间，而常量不占空间
问题：7

|------------------------整型------------------|--------指针-------------------|
表达式------------右值--------左值地址---------|-------右值--------左值地址
a.m               1008           1016                  1008           1016
b.v + 1           1037          illegal                1040          illegal
c.j – 4          0996          illegal                0984          illegal
d.a – d           12           illegal                 3             illegal
e.v – w          - 24          illegal                - 6          illegal
f. &c             1056          illegal                1056           illegal
g. &e + 1         1036          illegal                1036           illegal
h. &o – 4        1080          illegal                1080           illegal
i. &(f + 2)      illegal        illegal                illegal        illegal
j. *g            illegal        illegal                1000            1064
k. *k + 1        illegal        illegal                1045           illegal
l. *(n + 1)      illegal        illegal                1012            1060
m. *h – 4       illegal        illegal                1076           illegal
n. *(u – 4)     illegal        illegal               1056            1076
o. *f – g       illegal        illegal               illegal        illegal
p. *f - *g       illegal        illegal               52             illegal
q. *s - *q       illegal        illegal               - 80           illegal
r. *(r – t)     illegal        illegal               illegal        illegal
s.y > i            0            illegal               0              illegal
t.y > *i         illegal        illegal               illegal         illegal
u. *y > *i       illegal        illegal                 1             illegal
v. **h           illegal        illegal               1080            1020
w.c++              1076         illegal               1076            illegal
x. ++c             1077         illegal               1080            illegal
y. *q++          illegal         illegal              1080            1072
z. (*q)++        illegal         illegal              1080           illegal
aa. *++q           illegal          illegal           1056            1076
bb. ++*q           illegal          illegal           1081           illegal
cc. *++*q          illegal          illegal           illegal        illegal
dd. ++*(*q)++      illegal          illegal           1021           illegal

#endif




//int del_substr(char *str, char const *substr)                   /*2,删除字符串的一部分*/
//{
//	if (substr == NULL)
//	{
//		return 0;
//	}
//	char *str_tmp = str;
//	char const *substr_tmp;
//	while (*str != '\0')
//	{
//		substr_tmp = substr;
//		if (*str_tmp == *substr_tmp)
//		{
//			while (*++str_tmp == *++substr_tmp);
//			if (*substr_tmp == '\0')
//			{
//				while (*str != '\0')
//				{
//					*str = *str_tmp;
//					str++;
//					str_tmp++;
//				}
//				return 1;
//			}
//		}
//		str++;
//		str_tmp++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char str[] = "ABCDEFABCDEF";
//	char const *substr = "CDF";
//	del_substr(str, substr);
//	printf("%s\n",str);
//	return 0;
//}


//void reverse_string(char *string)                    /*3,反向排列字符串数组*/
//{
//	char *p = string;
//	char *q = string;
//	while (*q != '\0')
//	{
//		q++;
//	}
//	q--;
//	while (p<=q)
//	{
//		char tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q--;
//	}
//}
//
//int main()
//{
//	char string[] = "ABCDEF";
//	reverse_string(string);
//	printf("%s\n", string);
//	return 0;
//}


//#define MAX_VALUE 1000                                       /*打印质数*/
//#define MAX_BIT_NUMBER ((MAX_VALUE - 3) / 2)
//#define SIZE (MAX_BIT_NUMBER / CHAR_BIT + 1)
//
//unsigned character_offset(unsigned bit_number)
//{
//	return bit_number / CHAR_BIT;
//}
//
//unsigned bit_offset(unsigned bit_number)
//{
//	return bit_number % CHAR_BIT;
//}
//
//void set_bit(char bit_array[], unsigned bit_number)
//{
//	bit_array[character_offset(bit_number)] |=
//		1 << bit_offset(bit_number);
//	//printf("%d\n", bit_array[character_offset(bit_number)]);
//}
//
//void clear_bit(char bit_array[], unsigned bit_number)
//{
//	bit_array[character_offset(bit_number)] &=
//		~(1 << bit_offset(bit_number));
//	//printf("%d\n", bit_array[character_offset(bit_number)]);
//}
//
//
//void assign_bit(char bit_array[], unsigned bit_number, int value)
//{
//	if (value != 0)
//		set_bit(bit_array, bit_number);
//	else
//		clear_bit(bit_array, bit_number);
//}
//
//int test_bit(char bit_array[], unsigned bit_number)
//{
//	if ((bit_array[character_offset(bit_number)] &
//		1 << bit_offset(bit_number)) != 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char sieve[SIZE];
//	int number;
//	int bit_number;
//	char *sp;
//
//	for (sp = sieve; sp < &sieve[SIZE];)
//	{
//		*sp++ = 0xff;
//	}
//		
//	for (number = 3; number < MAX_VALUE; number += 2)
//	{
//		bit_number = (number - 3) / 2;
//		if (test_bit(sieve, bit_number) == 0)
//			continue;
//		while ((bit_number += number) <= MAX_BIT_NUMBER)
//		{
//			clear_bit(sieve, bit_number);
//		}
//	}
//
//	printf("2\n");
//	for (bit_number = 0, number = 3; number <= MAX_VALUE; bit_number += 1, number += 2)
//	{
//		if (test_bit(sieve, bit_number))
//		{
//			printf("%d\n", number);
//		}
//	}
//	return 0;
//}


//#define MAX 1000001                                 /*大质数，小质数*/
//
//int Eratosthenes(char prime[], int max)
//{
//	int count = 0;
//	int i = 0;
//	int i_p;
//	int j;
//	int j_p;
//
//	for (i = 1; i < max; i++)
//		prime[i] = 1;
//
//	for (i = 1; i < max; i++){
//		if (prime[i] == 1){
//			i_p = 2 * i + 1;
//			for (j = 2 * i_p; j < max * 2 + 1; j += i_p)
//			if (j % 2 == 1 && prime[(j - 1) / 2] == 1){
//				j_p = (j - 1) / 2;
//				prime[j_p] = 0;
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int i;
//	int sum = 0;
//	int count = 0;
//	char prime[MAX];
//	int max;
//	for (i = 1; i < MAX; i++)
//		prime[i] = 1;
//
//	for (max = 1000; max < MAX; max += 1000){
//		count = Eratosthenes(prime, max) - sum;
//		printf("%d\t%d\n", max, count);
//		sum += count;
//	}
//}




