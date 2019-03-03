#include<stdio.h>
#include<stdarg.h>


#if 0

问题2 :缺点是调用函数时使用错误的数字或参数类型
问题3 :B的值将会被函数转换成指定的类型A，然后返回
问题7 :没有错误，但是调用这个函数时，大一点的数组会少一些元素，小一点的数组会多出一些元素
问题9 :使用include包含比起在其他源文件中寻找方便的多
问题10 :

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

1	调用了1次     1
2	调用了一次    1
10	调用了8次     109

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
全局变量与斐波那契有关系，每一个计数加一是前两项的总和

11	177
25	150049
50	25172538049

#endif


//int Hermite(int n, int x)                           /*1,厄密多项式*/
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


//int Gcd(int m, int n)                                 /*2,求最大公约数*/
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


//int Max_list(int n_values,...)                                         /*4,检查整形参数中的最大值*/
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


//void print_integer(int m)                                /*5,print函数*/
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