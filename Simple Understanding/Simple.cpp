#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#if 0

����1��

C��һ��������ʽ�����ԣ�Ҳ����˵��û�й���涨ʲô�ط�������д��䣬
һ���п��Գ��ֶ�����䣬ʲô�ط�Ӧ�����¿հ��Լ�Ӧ�ó��ֶ��ٿհ׵�
��Ԥ����ָ���Ǹ����⣩��һ��������Էֺ�Ϊһ�У���Ϊ��������


����2��

����ֻ��Ҫ����Щ��������һ�ݿ������ò�������಻ͬ�ĵط����и��ƣ�
��������ά����Щ����ʱ���ִ���Ŀ����ԣ�Ҳ�����ڴ�����������븴���ʡ�


����3:

��#define�����ֶ���Ϊһ������������������Ժ������Դ�ļ����κεط�ʱ��
���ᱻ�滻Ϊ�����ֵ���������Ǳ�����Ϊ����ֵ������������Щ����
���ܳ���������Щ��ͨ�������Գ��ֵĵط������縳ֵ������ߣ���


����6��

C�������ֲ��Ӽ�������±����Ϊ�кô�Ҳ�л������ô��ǲ���Ҫ�˷�ʱ���
��Щ��֪����ȷ�������±���м�顣��������������ʹ�ý���Ч���±������޷�����������

#endif


void print()                                       /*2�����벢���*/
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


void CheckSum()                                        /*3,�������Ͳ����*/
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


void LongestString()                               /*�����ַ���*/
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



