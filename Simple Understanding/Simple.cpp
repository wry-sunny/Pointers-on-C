#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#if 0

问题1：

C是一种自由形式的语言，也就是说并没有规则规定什么地方可以书写语句，
一行中可以出现多少语句，什么地方应该留下空白以及应该出现多少空白等
（预处理指令是个例外）。一个语句是以分号为一行，视为语句结束。


问题2：

这样只需要在这些声明中作一份拷贝，用不着在许多不同的地方进行复制，
避免了在维护这些代码时出现错误的可能性，也有利于代码的清晰度与复用率。


问题3:

用#define把名字定义为一个常量，当这个名字以后出现在源文件的任何地方时，
它会被替换为定义的值。由于它们被定义为字面值常量，所以这些名字
不能出现在于有些普通变量可以出现的地方（比如赋值符的左边）。


问题6：

C语言这种不加检查数组下标的行为有好处也有坏处。好处是不需要浪费时间对
有些已知是正确的数组下标进行检查。坏处是这样做将使得将无效的下标引用无法被检测出来。

#endif


void print()                                       /*2，输入并输出*/
{
	char buff[128] = { 0 };
	int sum = 0;
	while (1)
	{
		fgets(buff, 128, stdin);
		sum++;
		if (strcmp(buff, "end\n") == 0)
		{
			break;
		}
		printf("line %d	",sum);
		printf("%s\n",buff);
	}

}


void CheckSum()                                        /*3,计算检验和并输出*/
{
	signed char checksum = -1;

	char ch;

	while ((ch = getchar()) != '\n')
	{
		checksum += ch;
	    putchar(ch);
	}

	printf("	%d\n", checksum+'\n');
}


void LongestString()                               /*输出最长字符串*/
{
	char max_str[1000];
	char tmp_str[1000];
	int max = 0;
	int len;
	while (strcmp(gets_s(tmp_str), "EOF") != 0)
	{
		len = strlen(tmp_str);
		if (len > max)
		{
			max = len;
			strcpy(max_str, tmp_str);
		}
	}
	printf("%s",max_str);
}


int main()
{
	//print();
	//CheckSum();
	LongestString();
	return 0;
}



