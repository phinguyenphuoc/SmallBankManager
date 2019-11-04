#include <string>
#include <iostream>
#include "stkKhongKiHan.h"
#include "stkCoKiHan.h"
using namespace std;
class CNganHang{
	stkKhongKiHan *p1;
	stkCoKiHan *p2;
	int n1, n2;
public:
	CNganHang(int, int);
	~CNganHang();
	int getn1();
	int getn2();
	void themstkKhongKiHan(stkKhongKiHan& );
	void themstkCoKiHan(stkCoKiHan& );
	void xoastkKhongKiHan(int);
	void xoastkCoKiHan(int);
	void suastkKhongKiHan(stkKhongKiHan&, int);
	void suastkCoKiHan(stkCoKiHan&, int);
	float tongLaiKhongKiHan();
	float tongLaiCoKiHan();
	float tongLai();
	friend istream & operator >> (istream&, CNganHang&);
	friend ostream & operator << (ostream&, CNganHang&);
};

