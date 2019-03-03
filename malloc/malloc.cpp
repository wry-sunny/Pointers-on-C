#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//编程练习：2
#if 0
问题1 :不同的pc和pc系统所能分配的内存也不同
问题4 :

优点：在栈区分配内存的话，系统可以自动收回，不用用户自己释放，不会发生内存泄露
缺点：栈区所分配的内存在函数结束后会释放，不能被返回值用

问题5 :1，没有检测mallco函数是否成功分配内存
	   2，array-=1对指针进行了移动，然后使用for循环有可能会导致崩溃
	   3，需要返回值的话就不能释放它

#endif



//int *Fetch()                            /*从标准输入读取一列整数*/
//{
//	int *array;
//	int size = 1;
//	int count = 0;	
//	int value;
//	array = (int *)malloc(size * sizeof(int));
//	assert(array != NULL);
//
//	while (scanf("%d", &value) != EOF)
//	{
//		count++;
//		if (count >= size)
//		{
//			size += 1;
//			array = (int *)realloc(array, size*sizeof(int));
//			assert(array != NULL);
//		}
//		array[count] = value;
//	}
//
//		array[0] = count;
//		return array;
//		free(array);
//}
//
//int main()
//{
//	int *str;
//	str = Fetch();
//
//	while (*str != NULL)
//	{
//		printf("%d\n", *str++);
//	}
//
//	return 0;
//}