#include<stdio.h>


#if 0
����1��

����ע�ͺ�ȼ���
void
squares(int limit)
{
	for (i = 0; i < limit; i += 1 )
		printf("%d%d0,i,i*i");
	End of commented-out code */
}

����2��

�ŵ㣺 ����ʱ������
ȱ�㣺��1�����ļ���һ��Ķ�������Ҫ���±���������ļ�; ��ʱ�ȷֳɼ���С�ļ���ֻ���±����иĶ����ļ��ı���ʱ�䳤��
��2�������Ķ���
��3������ά��

����5��

int xy;     ����һ�����α���xy

����6��

û�д��󣬵��ǲ�������ôд���͹ؼ��ֲ��ı�����
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
		printf("������ȷ\n");
	}
	else
	{
		printf("������ȷ\n");
	}
	return 0;
}