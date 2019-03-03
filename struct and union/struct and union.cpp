#include<stdio.h>



#if 0

问题4 : 错误，abc是struct定义的一个自定义数据类型，并不是一个变量，不能用来直接访问成员
问题5 : 错误，abc是typedef对于struct定义的一个自定义类型的重命名，而不是一个变量，不可以直接访问
问题7 : 
nodes								200								&node[3].c->a					200
nodes.a								illegal							&nodes->a						200
nodes[3].a							12								np								nodes[2]
nodes[3].c							200								np->a							22
nodes[3].c->a						5								np->c->c->a						15
* nodes								nodes[0]						npp								216
* nodes.a							illegal							npp->a							illegal	
(*nodes).a							5								*npp							248
nodes->a							5								* *npp							nodes[4]
nodes[3].b->b						248								* npp->a						illegal
*nodes[3].b->b						nodes[4]						(*npp)->a						18
& nodes								200								& np							--
&nodes[3].a							236								& np->a							224
& nodes[3].c						244								& np->c->c->a					212
问题11 :
x &= 0x0fff;
x |= (aaa & 0xf) << 12;
x &= 0xf00f;
x |= (bbb & 0xff) << 4;
x &= 0xfff1;
x |= (ccc & 0x7) << 1;
x &= 0xfffe;
x |= (ddd & 0x1);
问题12 :2或者-2，编译器不同而不同
问题13 :有错误，这是联合体，共用一块空间，a的类型是整形，在对b进行赋值时，会将a覆盖掉，而对c进行赋值时，也会把b的一部分覆盖掉

#endif


//typedef struct telephone                       /*定义结构体*/
//{
//	int area;
//	int	exchange;
//	int Stationumber;
//}telephone;
//
//typedef struct information
//{
//	int year;
//	int month;
//	int day;
//	int time;
//	telephone  phonecall;
//	telephone  phonecalling;
//	telephone  phonebilled;
//}information;

typedef union info 
{
	typedef struct pure_cash
	{
		float msrp;
		float sales_price;
		float sales_tax;
		float licensing_fee;
	}pure_cash;

	typedef struct cash_loan
	{
		float msrp;
		float sales_price;
		float sales_tax;
		float licensing_fee;
		float down_payment;
		int loan_duration;
		float interest_rate;
		float monthly_payment;
		char bank[21];
	};

	typedef struct lease
	{
		float msrp;
		float sales_price;
		float down_payment;
		float security_deposit;
		float monthly_payment;
		float lease_term;
	}lease;

}info;
