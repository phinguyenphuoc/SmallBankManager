#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <ctime>
#include "CNganHang.h"
using namespace std;
int main() {
	int n1, n2, i, j, p;
	cout << "KHOI TAO DANH SACH CAC LOAI SO TIET KIEM" << endl;
	cout << "Nhap so luong so tiet kiem co ki han: ";
	cin >> n1;
	cout << "Nhap so luong so tiet kiem khong ki han: ";
	cin >> n2;
	CNganHang a(n1, n2);
	cin >> a;
	do {
		cout << "----------------------------------" << endl;
		cout << "1.Hien thi danh sach 2 loai so tiet kiem" << endl;
		cout << "2.Them so tiet kiem moi" << endl;
		cout << "3.Xoa so tiet kiem" << endl;
		cout << "4.Sua so tiet kiem" << endl;
		cout << "5.Hien thi so tien lai phai tra" << endl;
		cout << "Exit:Phim bat ki" << endl;
		cout << "----------------------------------" << endl;
		cin >> i;
		switch (i) {
			case 1:
				cout << a;
				break;
			case 2:
				cout << "1.Them so tiet kiem co ki han" << endl;
				cout << "2.Them so tiet kiem khong ki han" << endl;
				cout << "QUAY LAI: so bat ki" << endl;
				cin >> j;
				if (j == 1) {
					stkCoKiHan stk;
					cout << "Nhap thong tin so tiet kiem them vao: ";
					cin >> stk;
					a.themstkCoKiHan(stk);
				}else if (j == 2) {
					stkKhongKiHan stk;
					cout << "Nhap thong tin so tiet kiem them vao: ";
					cin >> stk;
					a.themstkKhongKiHan(stk);
				}
				else {
					break;
				}
				break;
			case 3:
				cout << "1.Xoa so tiet kiem co ki han" << endl;
				cout << "2.Xoa so tiet kiem khong ki han" << endl;
				cout << "QUAY LAI: so bat ki" << endl;
				cin >> j;
				if (j == 1) {
					cout << "Nhap vi tri muon xoa: ";
					cin >> p;
					while (p<1 || p>a.getn2()) {
						cout << "vi tri khong hop le, vui long nhap lai: ";
						cin >> p;
					}
					a.xoastkCoKiHan(p-1);
				}else if (j == 2) {
					cout << "Nhap vi tri muon xoa: ";
					cin >> p;
					while (p<1 || p>a.getn1()) {
						cout << "vi tri khong hop le, vui long nhap lai: ";
						cin >> p;
					}
					a.xoastkKhongKiHan(p - 1);
				}
				else {
					break;
				}
				break;
			case 4:
				cout << "1.Sua so tiet kiem co ki han" << endl;
				cout << "2.Sua so tiet kiem khong ki han" << endl;
				cout << "QUAY LAI: so bat ki" << endl;
				cin >> j;
				if (j == 1) {
					cout << "Nhap vi tri muon sua";
					cin >> p;
					while (p<1 || p>a.getn2()) {
						cout << "vi tri khong hop le, vui long nhap lai: ";
						cin >> p;
					}
					stkCoKiHan stk;
					cout << "Nhap thong tin sua doi: " << endl;
					cin >> stk;
					a.suastkCoKiHan(stk, p - 1);
				}else if (j == 2) {
					cout << "Nhap vi tri muon sua";
					cin >> p;
					while (p<1 || p>a.getn1()) {
						cout << "vi tri khong hop le, vui long nhap lai: ";
						cin >> p;
					}
					stkKhongKiHan stk;
					cout << "Nhap thong tin sua doi: " << endl;
					cin >> stk;
					a.suastkKhongKiHan(stk, p - 1);
				}else {
					break;
				}
				break;
			case 5:
				cout << "Tong tien lai cua loai khong ki han: " << a.tongLaiKhongKiHan() << endl;
				cout << "Tong tien lai cua loai co ki han: " << a.tongLaiCoKiHan() << endl;
				cout << "Tien lai tong cong ngan hang phai tra: " << a.tongLai() << endl; 
		}
	} while (i >= 1 && i <= 5);
	system("pause");
	return 0;
}