#include<stdio.h>


#if 0
问题1：

这样注释后等价于
void
squares(int limit)
{
	for (i = 0; i < limit; i += 1 )
		printf("%d%d0,i,i*i");
	End of commented-out code */
}

问题2：

优点： 链接时间会减少
缺点：（1）对文件的一点改动，都需要重新编译这个大文件; 这时比分成几个小文件后，只重新编译有改动的文件的编译时间长。
（2）不易阅读。
（3）不易维护

问题5：

int xy;     定义一个整形变量xy

问题6：

没有错误，但是不建议这么写，和关键字差不多的变量名
#endif


bool JudgeBrace()
{
	char ch;
	int count = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == '{')
		{
			count++;
		}
		if (ch == '}')
		{
			count--;
		}
		if (count < 0)
		{
			return false;
		}
	}
	if (count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	if (JudgeBrace())
	{
		printf("程序正确\n");
	}
	else
	{
		printf("程序不正确\n");
	}
	return 0;
}