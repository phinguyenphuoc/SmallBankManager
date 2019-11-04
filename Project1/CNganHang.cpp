#include "CNganHang.h"
using namespace std;
CNganHang::CNganHang(int x, int y){
	n1 = x;
	p1 = new stkKhongKiHan[n1];
	n2 = y;
	p2 = new stkCoKiHan[n2];
}
CNganHang::~CNganHang(){
}
int CNganHang::getn1() {
	return n1;
}
int CNganHang::getn2() {
	return n2;
}
void CNganHang::themstkKhongKiHan(stkKhongKiHan& stk) {
	stkKhongKiHan *t = this->p1;
	this->n1++;
	this->p1 = new stkKhongKiHan[this->n1];
	for (int i = 0; i < n1 - 1; i++) {
		p1[i] = t[i];
	}
	p1[n1 - 1] = stk;
}
void CNganHang::themstkCoKiHan(stkCoKiHan& stk) {
	stkCoKiHan *t = this->p2;
	this->n2++;
	this->p2 = new stkCoKiHan[this->n2];
	for (int i = 0; i < n2 - 1; i++) {
		p2[i] = t[i];
	}
	p2[n2 - 1] = stk;
}
void CNganHang::xoastkKhongKiHan(int k) {
	for (int i = k - 1; i < n1 - 1; i++) {
		p1[i] = p1[i + 1];
	}
	n1--;
}
void CNganHang::xoastkCoKiHan(int k) {
	for (int i = k - 1; i < n2 - 1; i++) {
		p2[i] = p2[i + 1];
	}
	n2--;
}
void CNganHang::suastkKhongKiHan(stkKhongKiHan& stk, int k) {
	p1[k].setcmnd(stk.getcmnd());
	p1[k].sethoTen(stk.gethoTen());
	p1[k].setd(stk.getd());
	p1[k].setm(stk.getm());
	p1[k].sety(stk.gety());
	p1[k].settgui(stk.gettgui());
	p1[k].setr(stk.getr());
}
void CNganHang::suastkCoKiHan(stkCoKiHan& stk, int k) {
	p2[k].setcmnd(stk.getcmnd());
	p2[k].sethoTen(stk.gethoTen());
	p2[k].setd(stk.getd());
	p2[k].setm(stk.getm());
	p2[k].sety(stk.gety());
	p2[k].settgui(stk.gettgui());
	p2[k].setr(stk.getr());
	p2[k].setkyHan(stk.getkyHan());
}
float CNganHang::tongLaiKhongKiHan() {
	float s=0;
	for (int i = 0; i < n1; i++) {
		s += p1[i].tienLai();
	}
	return s;
}
float CNganHang::tongLaiCoKiHan() {
	float s = 0;
	for (int i = 0; i < n2; i++) {
		s += p2[i].tienLai();
	}
	return s;
}
float CNganHang::tongLai() {
	float s = 0;
	s = tongLaiKhongKiHan() + tongLaiCoKiHan();
	return s;
}
istream & operator >> (istream& is, CNganHang& nh) {
	for (int i = 0; i < nh.n1; i++) {
		cout << "****So tiet kiem khong ki han thu: " << i + 1 << "****" << endl;
		is >> nh.p1[i];
	}
	for (int i = 0; i < nh.n2; i++) {
		cout << "****So tiet kiem co ki han thu: " << i + 1 << "****" << endl;
		is >> nh.p2[i];
	}
	return is;
}
ostream & operator << (ostream& os, CNganHang& nh) {
	os << "----------------------------------" << endl;
	os << "LOAI SO TIET KIEM KHONG KI HAN:" << endl;
	for (int i = 0; i < nh.n1; i++) {
		os << nh.p1[i];
	}
	os << "----------------------------------" << endl;
	os << "LOAI SO TIET KIEM CO KI HAN:" << endl;
	for (int i = 0; i < nh.n2; i++) {
		os << nh.p2[i];
	}
	return os;
}
