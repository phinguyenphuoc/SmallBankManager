#include <string>
#include <iostream>
using namespace std;
class stkKhongKiHan{
	int cmnd, d, m, y;
	string hoTen;
	float tgui, r;
	
public:
	stkKhongKiHan();
	~stkKhongKiHan();
	void setcmnd(int);
	void setd(int);
	void setm(int);
	void sety(int);
	void sethoTen(string);
	void settgui(float);
	void setr(float);
	int getcmnd();
	int getd();
	int getm();
	int gety();
	string gethoTen();
	float gettgui();
	float getr();
	float tienLai();
	friend istream & operator >> (istream&, stkKhongKiHan&);
	friend ostream & operator << (ostream&, stkKhongKiHan&);
};

