#include<stdio.h>
#include<stdarg.h>


#if 0

����2 :ȱ���ǵ��ú���ʱʹ�ô�������ֻ��������
����3 :B��ֵ���ᱻ����ת����ָ��������A��Ȼ�󷵻�
����7 :û�д��󣬵��ǵ����������ʱ����һ����������һЩԪ�أ�Сһ����������һЩԪ��
����9 :ʹ��include��������������Դ�ļ���Ѱ�ҷ���Ķ�
����10 :

 static int count;

 int Fibonacci(int n)
 {
	 count++;
	 if (n == 1 || n == 2)
	 {
		 return 1;
	 }

	 else
		 return Fibonacci(n - 1) + Fibonacci(n - 2);
 }

 int main()
 {
	 count = 0;
	 Fibonacci(1);
	 printf("%d", count);
	 return 0;
 }

1	������1��     1
2	������һ��    1
10	������8��     109

1   
2	1
3	3
4	5
5	9
6	15
7	25
8	41
9	67
10	109
ȫ�ֱ�����쳲������й�ϵ��ÿһ��������һ��ǰ������ܺ�

11	177
25	150049
50	25172538049

#endif


//int Hermite(int n, int x)                           /*1,���ܶ���ʽ*/
//{
//	if (n <= 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2 * x;
//	}
//	else
//	{
//		return 2 * x * Hermite(n - 1,x) - 2 * (n - 1) * Hermite(n - 2, x);	
//	}
//}
//
//int main()
//{
//	printf("%d\n", Hermite(3, 2));
//	return 0;
//}


//int Gcd(int m, int n)                                 /*2,�����Լ��*/
//{
//	if (m < 0 || n < 0)
//	{
//		return 0;
//	}
//
//	int r = m%n;
//
//	if (r == 0)
//	{
//		return n;
//	}
//	else if (r > 0)
//	{
//		return Gcd(n, r);
//	}
//}
//
//int main()
//{
//	printf("%d", Gcd(24,60));
//	return 0;
//}


//int Max_list(int n_values,...)                                         /*4,������β����е����ֵ*/
//{
//	va_list va;
//	int max = 0;
//	va_start(va, n_values);
//
//	for (int i = 0; i < n_values; i++)
//	{
//		int temp = va_arg(va, int);
//		if (temp>max)
//		{
//			max = temp;
//		}
//	}
//	va_end(va);
//	return max;
//}
//
//int main()
//{
//	printf("max=%d", Max_list(9,1,2,98,4,10,6,42,8,9));
//	return 0;
//}


//void print_integer(int m)                                /*5,print����*/
//{
//	printf("%d",m);
//}
//
//void print_float(float m)
//{
//	printf("%f", m);
//}
//
//void my_printf(char * n_values,...)                    
//{
//	va_list va;
//	va_start(va, n_values);
//	while (*n_values != '\0')
//	{
//		if (*n_values++ == '%')
//		{
//			if (*n_values == 'd')
//			{
//				print_integer(va_arg(va, int));
//			}
//			else if (*n_values == 'f')
//			{
//				print_float(va_arg(va, float));
//			}
//			else if (*n_values == 'c')
//			{
//				putchar(va_arg(va, int));
//			}
//			else if (*n_values == 's')
//			{
//				char *q = va_arg(va, char *);
//				while (*q != '\0')
//				{
//					putchar(*q++);
//				}
//			}
//		}
//		else
//		{
//			putchar(*n_values);
//		}
//		n_values++;
//	}
//	va_end(va);
//}
//
//int main()
//{
//	my_printf("%d	\n", 3);
//	my_printf("%f	\n", 3.2);
//	my_printf("%c	\n", 'a');
//	my_printf("%s	\n", "123456");
//	return 0;
//}