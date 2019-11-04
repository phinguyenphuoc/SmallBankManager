#define _CRT_SECURE_NO_WARNINGS
#include "stkCoKiHan.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
stkCoKiHan::stkCoKiHan()
{
}
stkCoKiHan::~stkCoKiHan()
{
}
void stkCoKiHan::setcmnd(int cmnd) {
	this->cmnd = cmnd;
}
void stkCoKiHan::sethoTen(string hoTen) {
	this->hoTen = hoTen;
}
void stkCoKiHan::setd(int d) {
	this->d = d;
}
void stkCoKiHan::setm(int m) {
	this->m = m;
}
void stkCoKiHan::sety(int y) {
	this->y = y;
}
void stkCoKiHan::settgui(float tgui) {
	this->tgui = tgui;
}
void stkCoKiHan::setr(float r) {
	this->r = r;
}
void stkCoKiHan::setkyHan(int kyHan) {
	this->kyHan = kyHan;
}
int stkCoKiHan::getcmnd() {
	return this->cmnd;
}
string stkCoKiHan::gethoTen() {
	return this->hoTen;
}
int stkCoKiHan::getd() {
	return this->d;
}
int stkCoKiHan::getm() {
	return this->m;
}
int stkCoKiHan::gety() {
	return this->y;
}
float stkCoKiHan::gettgui() {
	return this->tgui;
}
float stkCoKiHan::getr() {
	return this->r;
}
int stkCoKiHan::getkyHan() {
	return this->kyHan;
}
float stkCoKiHan::tienLai() {
	float s = 0;
	int t, k;
	time_t now = time(0);
	tm *ltm = localtime(&now);
	if ((1900 + ltm->tm_year) >= this->y) {
		k = (1900 + ltm->tm_year - this->y) * 12;
		t = (1 + ltm->tm_mon - this->m) + k;
		if (t >= this->kyHan) {
			s = this->tgui*(this->r / 100)*t;
		}
	}
	return s;
}
istream & operator >> (istream& is, stkCoKiHan& stk) {
	cout << "Nhap ho ten khach hang: ";
	rewind(stdin);
	getline(is, stk.hoTen);
	cout << "Nhap cmnd(<=9 so): ";
	is >> stk.cmnd;
	while (stk.cmnd < 0) {
		cout << "Cmnd khong hop le, vui long nhap lai: ";
		is >> stk.cmnd;
	}
	cout << "Nhap so tien gui(trieu dong): ";
	is >> stk.tgui;
	while (stk.tgui < 0) {
		cout << "So tien gui khong hop le, vui long nhap lai: ";
		is >> stk.tgui;
	}
	cout << "Nhap moc thoi gian gui " << endl;
	cout << "Nhap nam gui: ";
	is >> stk.y;
	while (stk.y < 0) {
		cout << "Nam khong hop le, vui long nhap lai: ";
		is >> stk.y;
	}
	cout << "Nhap thang gui: ";
	is >> stk.m;
	while (stk.m < 1 || stk.m>12) {
		cout << "Thang khong hop le, vui long nhap lai: ";
		is >> stk.m;
	}
	cout << "Nhap ngay gui: ";
	is >> stk.d;
	switch (stk.m) {
	case 1:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 2:
		while (stk.d < 1 || stk.d>28) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 3:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 4:
		while (stk.d < 1 || stk.d>30) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 5:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 6:
		while (stk.d < 1 || stk.d>30) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 7:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 8:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 9:
		while (stk.d < 1 || stk.d>30) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 10:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 11:
		while (stk.d < 1 || stk.d>30) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	case 12:
		while (stk.d < 1 || stk.d>31) {
			cout << "Ngay khong hop le, vui long nhap lai: ";
			is >> stk.d;
		}
		break;
	}

	cout << "Nhap lai suat(%): ";
	is >> stk.r;
	cout << "Nhap ki han(thang): ";
	is >> stk.kyHan;
	return is;
}
ostream & operator << (ostream& os, stkCoKiHan& stk) {
	os << "Khach hang: " << stk.hoTen << endl;
	os << "CMND: " << stk.cmnd << endl;
	os << "So tien gui(trieu dong): " << stk.tgui << endl;
	os << "Ngay gui(dd/mm/yy): " << stk.d << "/" << stk.m << "/" << stk.y << endl;
	os << "Lai suat: " << stk.r << "%" << endl;
	os << "Ky han:" << stk.kyHan << " thang" << endl;
	os << "Tien lai cho den hien tai: " << stk.tienLai() << "trieu dong" << endl;
	return os;
}
