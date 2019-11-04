#include <string>
#include <iostream>
using namespace std;
class stkCoKiHan{
	int cmnd, d, m, y, kyHan;
	string hoTen;
	float tgui, r;
public:
	stkCoKiHan();
	~stkCoKiHan();
	void setcmnd(int);
	void setd(int);
	void setm(int);
	void sety(int);
	void sethoTen(string);
	void settgui(float);
	void setr(float);
	void setkyHan(int);
	int getcmnd();
	int getd();
	int getm();
	int gety();
	string gethoTen();
	float gettgui();
	float getr();
	int getkyHan();
	float tienLai();
	friend istream & operator >> (istream&, stkCoKiHan&);
	friend ostream & operator << (ostream&, stkCoKiHan&);
};

