#include<stdio.h>
#include<LIMITS.H>
#if 0

问题2：答案为-2，-5，-10，因编译器的不同而不同，但是乘法运算必定在减法运算前
问题10：

int a = 10, b = -25;
int c = 0; d = 3;
int e = 20;

a的二进制：0000 1010
b的二进制：1110 0111

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
aa. b >> a - 4	    a = 6   1110 0111   >>  1111 1111   -1         + - 运算符优先级大于 >>
bb. a != b != c     1
cc. a == b == c		1
dd. d < a < e		1
ee. e > a > d		0
ff. a - 10 > b + 10			1                   + - 运算符优先级大于 >
gg. a & 0x1 == b & 0x1		0000 1010  &  0000 0001  == 1110 0111  &  0000 0001      0000 0000 == 0000 0001       0
hh. a | b << a & b   	<< 优先级大于&大于| 1111 1111 1110 0111 << 1001 1100 0000 0000 & 1111 1111 1110 0111
                        1001 1100 0000 0000 | 0000 0000 0000 1010  1001 1100 0000 1010     -25590
ii. a > c || ++a > b    ++优先级大于>大于||     1
jj. a > c && ++a > b	++优先级大于>大于&&		1
kk. !~b++				++大于！大于~           0
ll. b++ & a <= 30		++大于<=大于&   1110 0111 & 0000 0001  0000 0001    1
mm. a - b, c += d, e - c   -15  3  17
nn. a <<= 3 > 0			>大于<<=   0001 0100     20
oo. a <<= d > 20 ? b && c++ : d--      ++优先级大于--大于>大于&&大于?:大于<<=      a<<2
                                     0000 1010 <<  0101 0000  80

问题11：

a. a+(b/c)      a+b/c      先算出b/c,再+a
b. (a+b)/c      先算出a+b，再除以c
c. (a*b) % 6    a*b%6    先a*b，再求余，*优先级大于%
d.a*(b % 6)     a*(b % 6)    先b%6，再乘以a
e. (a + b) == 6  a + b == 6   a先和b相加，然后再与6相等，+优先级大于==
f. !((a >= ’0’) && (a <= ’9’))   ! ( a >= ’0’ && a <= ’9’ )  
                                     先算a >= ’0’与a <= ’9’，然后&&，然后取非，>=，<=优先级高于 &&高于！
g. ((a & 0x2f) == (b | 1)) && ((~c) > 0)  ( a & 0x2f ) == ( b | 1 ) && ~ c > 0
             先运算a & 0x2f然后~c ，然后 (~c) > 0，然后a & 0x2f，然后b | 1，然后(a & 0x2f) == (b | 1)，然后&&
										   
h. ((a << b) – 3)<(b << (a + 3))    ( a << b ) – 3 < b << a + 3
先a + 3，然后a << b，然后(a << b) – 3，b << (a + 3)，最后<，+优先级大于-大于<<大于<
i. ~(a++)             ~ a ++    先取反，然后++，  ++优先级大于~
j. ((a == 2) || (a == 4)) && ((b == 2) || (b == 4))   ( a == 2 || a == 4 ) && ( b == 2 || b == 4 )
                                    先a == 2，a == 4，b == 2，b == 4，然后||，最后&&，==优先级大于&&大于||
k. (a&b) ^ (a | b)        	a&b^(a|b)   先a&b，然后a | b，然后^，&大于^大于|
l. (a + (b + c))    a+(b+c)   先b+c,然后+a，（）优先级最高

#endif



//unsigned int reverse_bits(unsigned int value)         /*二进制位模式从左到右变换*/
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


//unsigned character_offset(unsigned bit_number)           /*第四题，位数组*/
//{
//	return bit_number / CHAR_BIT;                   //CHAR_BIT   计算机中位的数目
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



//int Myftol(double f)            /*提取整数*/
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