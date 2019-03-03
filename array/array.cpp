#include<stdio.h>
#include<stdlib.h>

#if 0

问题1 :
ints		100
ip			112
ints[4]		50
ip[4]		80
ints + 4	116
ip+4		128
*ints + 4	14
*ip+4		44
*(ints + 4)	50
*(ip+4)		80
ints[-2]	illegal 
ip[-2]		20
&ints		100
&ip			illegal 
&ints[4]	116
&ip[4]		128
&ints + 4	420
&ip+4		illegal 
& ints[-2]	illegal 
& ip[-2]	104

问题2 :不相等，array[i+j]相当于数组，i+j[array]相当于j数组加一个值；

问题8 :a为一个指针变量，所以a[3]会先将a的地址加上12后的地址，去寻找这个地址中保存的值
       b是个数组名。所以它把12加到b的存储地址，然后间接访问操作从那里获得值

问题10 :
array			1000
array+2			1008
array[3]		1012
array[2]-1		1006
& array[1][2]	1008
& array[2][0]	1008

问题11 :
array					1000		int(*p)[2][3][6]
array+2					1288		int(*p)[2][3][6]
array[3]				1432		int(*p)[3][6]
array[2] - 1			1216		int(*p)[3][6]
array[2][1]				1360		int(*p)[6]
array[1][0] + 1			1168		int(*p)[6]
array[1][0][2]			1192		int *p
array[0][1][0] + 2		1080		int *p
array[3][1][2][5]		don`t know  int p
& array[3][1][2][5]		1572		int *p

问题13 :
*array							array[0]
*(array+2)						array[2]
*(array+1)+4					array[1]+4
* (*(array + 1) + 4)			array[1][4]
*(*(*(array + 3) + 1) + 3)		array[3][1][3]
*(*(*array + 1) + 2)			array[0][1][2]
*(**array + 2)					array[0][0][2]
**(*array + 1)					array[0][1][0]
***array						array[0][0][0]

问题14 :当i是一个指向整型数组的指针时就是对的

问题15 :第二句更合理，如果which大于SIZE时，作为下标时会出错 

问题18 :void function(int (*array)[2][5])

#endif


//int main()                                                     /*1,数组的初始化*/
//{
//	unsigned char char_value[3][6][4][5] = 
//	{
//		{0},
//		{ 
//		  { 0 },
//		  { { 0 }, { 0, ' ' } },
//		  { { 0 }, { 0 }, { 0, 0, 0, 'A' }, { 0, 0, 0, 0, 'x' } },
//		  { { 0 }, { 0 }, { 0, 0, 0xf3 } },
//		  { { 0 }, { 0 }, { 0, 0, 0, '\n' } },
//		},
//		{ 
//		  { 0 },
//		  { { 0 }, { 0, 0, 0320 }  },
//		  { { 0 }, { 0, '0' }, { 0, 0, '\'' }, { 0, '\121' }  },
//		  { 0 },
//		  { { 0 }, { 0 }, { 0 }, { 0, 0, '3', 3 } },
//		  { { 0 }, { 0 }, { 0 }, { 0, 0, 0, 0, 125 } }
//		}
//	};
//	    printf("%d\n", char_value[1][1][1][1]);
//		printf("%c\n", char_value[1][2][2][3]);
//		printf("%c\n", char_value[1][2][3][4]);
//		printf("%x\n", char_value[1][3][2][2]);
//		printf("%d\n", char_value[1][4][2][3]);
//		printf("%o\n", char_value[2][1][1][2]);
//		printf("%c\n", char_value[2][2][1][1]);
//		printf("%c\n", char_value[2][2][2][2]);
//		printf("%x\n", char_value[2][2][3][1]);
//		printf("%c\n", char_value[2][4][3][2]);
//		printf("%d\n", char_value[2][4][3][3]);
//		printf("%d\n", char_value[2][5][3][4]);
//	return 0;
//}


//#define SIZE 10                                          /*求是否为单位矩阵*/
//bool Identity_matrix(int (*matrix)[SIZE])
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE;j++)
//		if (i == j)
//		{
//			if (matrix[i][j] == 1)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//void Unitmatrix(int(*matrix)[SIZE])
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		if (i == j)
//		{
//			matrix[i][j] = 1;
//		}
//	}
//}
//
//int main()
//{
//	int matrix[SIZE][SIZE] = { 0 };
//	Unitmatrix(matrix);
//	if (Identity_matrix(matrix))
//	{
//		printf("该矩阵是单位矩阵\n");
//	}
//	else
//	{
//		printf("该矩阵不是单位矩阵\n");
//	}
//	return 0;
//}


//#define SIZE 10                                          /*求是否为单位矩阵*/
//bool Identity_matrix(int *matrix,int n)
//{
//	int row;
//	int column;
//	for (row = 0; row < n; row++)
//	{
//		for (column = 0; column < n; column++)
//		{
//			if (*matrix++ != (row == column))
//				return false;
//		}
//	}
//		return true;
//}
//
//int main()
//{
//	int matrix[SIZE][SIZE] = { 0 };
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		if (i == j)
//		{
//			matrix[i][j] = 1;
//		}
//	}
//	if (Identity_matrix((int *)matrix, SIZE))
//	{
//		printf("该矩阵是单位矩阵\n");
//	}
//	else
//	{
//		printf("该矩阵不是单位矩阵\n");
//	}
//	return 0;
//}


//#define SIZE_X 3                                  /*矩阵相乘*/
//#define SIZE_Y 2
//#define SIZE_Z 4
//
//void Matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
//{
//	int i, j;
//	for (i = 0; i < x; i++){
//		for (j = 0; j < z; j++){
//			int k;
//			int *p1 = m1 + i * y;
//			int *p2 = m2 + j;
//			for (k = 0; k < y; k++){
//				*r += *p1 * *p2;
//				p1++;
//				p2 += z;
//			}
//			r++;
//		}
//	}
//}
//
//int main()
//{
//	int m1[SIZE_X][SIZE_Y] = { 2, -6, 3, 5, 1, -1 };
//	int m2[SIZE_Y][SIZE_Z] = { { 4, -2, -4, -5 }, { -7, -3, 6, 7 } };
//	int r[SIZE_X][SIZE_Z] = { 0 };
//	Matrix_multiply((int *)m1, (int *)m2, (int *)r, SIZE_X, SIZE_Y, SIZE_Z);
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++)
//			printf("%d ", r[i][j]);
//		printf("\n");
//	}
//}


//void print_board(int(*board)[8])                             /*八皇后*/
//{
//	int row;
//	int column;
//	static int n_solutions;
//
//	n_solutions += 1;
//	printf("Solution #%d:\n", n_solutions);
//
//	for (row = 0; row < 8; row++){
//		for (column = 0; column < 8; column++){
//			if (board[row][column])
//				printf("Q");
//			else
//				printf("+");
//		}
//		putchar('\n');
//	}
//	putchar('\n');
//}
//
//int conflicts(int row, int column, int(*board)[8])
//{
//	int i;
//	for (i = 1; i < 8; i++){
//		if (row - i >= 0 && board[row - i][column])
//			return 1;
//		if (column - i >= 0 && board[row][column - i])
//			return 1;
//		if (column + i < 8 && board[row][column + i])
//			return 1;
//
//		if (row - i >= 0 && column - i >= 0 && board[row - i][column - i])
//			return 1;
//		if (row - i >= 0 && column + i < 8 && board[row - i][column + i])
//			return 1;
//	}
//	return 0;
//}
//
//void place_queen(int row,int(*board)[8])
//{
//	int column;
//	for (column = 0; column < 8; column++){
//		board[row][column] = 1;
//		if (row == 0 || !conflicts(row, column,board))
//		if (row < 7)
//			place_queen(row + 1, board);
//		else
//			print_board(board);
//		board[row][column] = 0;
//	}
//}
//
//int main()
//{
//	int board[8][8];
//	place_queen(0, board);
//	return 0;
//}