#include<stdio.h>



#if 0

����4 : ����abc��struct�����һ���Զ����������ͣ�������һ����������������ֱ�ӷ��ʳ�Ա
����5 : ����abc��typedef����struct�����һ���Զ������͵���������������һ��������������ֱ�ӷ���
����7 : 
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
����11 :
x &= 0x0fff;
x |= (aaa & 0xf) << 12;
x &= 0xf00f;
x |= (bbb & 0xff) << 4;
x &= 0xfff1;
x |= (ccc & 0x7) << 1;
x &= 0xfffe;
x |= (ddd & 0x1);
����12 :2����-2����������ͬ����ͬ
����13 :�д������������壬����һ��ռ䣬a�����������Σ��ڶ�b���и�ֵʱ���Ὣa���ǵ�������c���и�ֵʱ��Ҳ���b��һ���ָ��ǵ�

#endif


//typedef struct telephone                       /*����ṹ��*/
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
