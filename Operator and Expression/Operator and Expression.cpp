#include<stdio.h>
#include<LIMITS.H>
#if 0

����2����Ϊ-2��-5��-10����������Ĳ�ͬ����ͬ�����ǳ˷�����ض��ڼ�������ǰ
����10��

int a = 10, b = -25;
int c = 0; d = 3;
int e = 20;

a�Ķ����ƣ�0000 1010
b�Ķ����ƣ�1110 0111

a. b               -25
b. b++             -25    -24
c. --a              9     9
d. a / 6            1
e. a % 6            4
f. b % 10          -5
g. a << 2           40
h. b >> 3           0001 1001         1110 0111     >>     1111 1100       0000 0100  4
i. a > b            1
j. b = a			b = 10,a = 10
k. b == a			0
l. a & b            0000 1010    1110 0111  & 0000 0010      2
m. a ^ b            0000 1010    1110 0111  ^ 1110 1101  0001 0011      -19
n. a | b            0000 1010    1110 0111  | 1110 1111  0001 0001      -17
o.  ~b              1110 0111   ~ 0001 1000    24
p. c && a           0
q. c || a           1
r. b ? a : c        10
s. a += 2           12
t. b &= 20          1110 0111    0001 0100  &=  0000 0100     4
u. b >>= 3          1110 0111    >>  1111 1100  0000 0011    0000 0100    -4
v. a %= 6           4
w. d = a > b        1
x. a = b = c = d    a = 3  b = 3  c = 3  d = 3
y. e = d + (c = a + b) + c    e = -27     c= -15
z. a + b * 3        -65
aa. b >> a - 4	    a = 6   1110 0111   >>  1111 1111   -1         + - ��������ȼ����� >>
bb. a != b != c     1
cc. a == b == c		1
dd. d < a < e		1
ee. e > a > d		0
ff. a - 10 > b + 10			1                   + - ��������ȼ����� >
gg. a & 0x1 == b & 0x1		0000 1010  &  0000 0001  == 1110 0111  &  0000 0001      0000 0000 == 0000 0001       0
hh. a | b << a & b   	<< ���ȼ�����&����| 1111 1111 1110 0111 << 1001 1100 0000 0000 & 1111 1111 1110 0111
                        1001 1100 0000 0000 | 0000 0000 0000 1010  1001 1100 0000 1010     -25590
ii. a > c || ++a > b    ++���ȼ�����>����||     1
jj. a > c && ++a > b	++���ȼ�����>����&&		1
kk. !~b++				++���ڣ�����~           0
ll. b++ & a <= 30		++����<=����&   1110 0111 & 0000 0001  0000 0001    1
mm. a - b, c += d, e - c   -15  3  17
nn. a <<= 3 > 0			>����<<=   0001 0100     20
oo. a <<= d > 20 ? b && c++ : d--      ++���ȼ�����--����>����&&����?:����<<=      a<<2
                                     0000 1010 <<  0101 0000  80

����11��

a. a+(b/c)      a+b/c      �����b/c,��+a
b. (a+b)/c      �����a+b���ٳ���c
c. (a*b) % 6    a*b%6    ��a*b�������࣬*���ȼ�����%
d.a*(b % 6)     a*(b % 6)    ��b%6���ٳ���a
e. (a + b) == 6  a + b == 6   a�Ⱥ�b��ӣ�Ȼ������6��ȣ�+���ȼ�����==
f. !((a >= ��0��) && (a <= ��9��))   ! ( a >= ��0�� && a <= ��9�� )  
                                     ����a >= ��0����a <= ��9����Ȼ��&&��Ȼ��ȡ�ǣ�>=��<=���ȼ����� &&���ڣ�
g. ((a & 0x2f) == (b | 1)) && ((~c) > 0)  ( a & 0x2f ) == ( b | 1 ) && ~ c > 0
             ������a & 0x2fȻ��~c ��Ȼ�� (~c) > 0��Ȼ��a & 0x2f��Ȼ��b | 1��Ȼ��(a & 0x2f) == (b | 1)��Ȼ��&&
										   
h. ((a << b) �C 3)<(b << (a + 3))    ( a << b ) �C 3 < b << a + 3
��a + 3��Ȼ��a << b��Ȼ��(a << b) �C 3��b << (a + 3)�����<��+���ȼ�����-����<<����<
i. ~(a++)             ~ a ++    ��ȡ����Ȼ��++��  ++���ȼ�����~
j. ((a == 2) || (a == 4)) && ((b == 2) || (b == 4))   ( a == 2 || a == 4 ) && ( b == 2 || b == 4 )
                                    ��a == 2��a == 4��b == 2��b == 4��Ȼ��||�����&&��==���ȼ�����&&����||
k. (a&b) ^ (a | b)        	a&b^(a|b)   ��a&b��Ȼ��a | b��Ȼ��^��&����^����|
l. (a + (b + c))    a+(b+c)   ��b+c,Ȼ��+a���������ȼ����

#endif



//unsigned int reverse_bits(unsigned int value)         /*������λģʽ�����ұ任*/
//{
//		unsigned int dst = 0;
//		int i;
//		for (i = 1; i != 0; i <<= 1)
//		{
//			dst <<= 1;
//			if (value & 1)
//				dst |= 1;
//			value >>= 1;
//		}
//		return dst;
//}
//
//int main()
//{
//	unsigned int value;
//	value = 25;
//	printf("%u", reverse_bits(value));
//	return 0;
//}


//unsigned character_offset(unsigned bit_number)           /*�����⣬λ����*/
//{
//	return bit_number / CHAR_BIT;                   //CHAR_BIT   �������λ����Ŀ
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
//	printf("%d\n", bit_array[character_offset(bit_number)]);
//}
//
//void clear_bit(char bit_array[], unsigned bit_number)
//{
//	bit_array[character_offset(bit_number)] &=
//		~(1 << bit_offset(bit_number));
//	printf("%d\n", bit_array[character_offset(bit_number)]);
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
//	char bit_array[] = { 15, 13 ,24};
//	//set_bit(bit_array,13);
//	//clear_bit(bit_array, 10);
//	//assign_bit(bit_array, 13,1);
//	printf("%d\n",test_bit(bit_array, 13));
//}



//int Myftol(double f)            /*��ȡ����*/
//{
//	int a = (int)f;
//	return a;
//}
//
//int main()
//{
//	double f = 12.22;
//	printf("%d",Myftol(f));
//	return 0;
//}