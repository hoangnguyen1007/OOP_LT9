#define _CRT_SECURE_NO_WARNINGS
#include "CongDan.h"
#include <ctime>
time_t t = time(0);
tm* ltm = localtime(&t);
void CongDan::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, ho_ten);
	cout << "Nhap nam sinh: ";
	cin >> nam_sinh;
	while (cin.fail() || nam_sinh < 0 || ltm->tm_year + 1900 - nam_sinh < 18)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap nam sinh: ";
		cin >> nam_sinh;
	}
	cout << "Nhap can cuoc cong dan: ";
	cin >> cccd;
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, cccd);
}
void CongDan::Xuat() const
{
	cout << "Ho ten: " << ho_ten << endl;
	cout << "Nam sinh: " << nam_sinh << endl;
	cout << "CCCD: " << cccd << endl;
	cout << "Dia chi: " << dia_chi << endl;
}