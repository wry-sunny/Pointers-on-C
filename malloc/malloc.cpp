#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//�����ϰ��2
#if 0
����1 :��ͬ��pc��pcϵͳ���ܷ�����ڴ�Ҳ��ͬ
����4 :

�ŵ㣺��ջ�������ڴ�Ļ���ϵͳ�����Զ��ջأ������û��Լ��ͷţ����ᷢ���ڴ�й¶
ȱ�㣺ջ����������ڴ��ں�����������ͷţ����ܱ�����ֵ��

����5 :1��û�м��mallco�����Ƿ�ɹ������ڴ�
	   2��array-=1��ָ��������ƶ���Ȼ��ʹ��forѭ���п��ܻᵼ�±���
	   3����Ҫ����ֵ�Ļ��Ͳ����ͷ���

#endif



//int *Fetch()                            /*�ӱ�׼�����ȡһ������*/
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