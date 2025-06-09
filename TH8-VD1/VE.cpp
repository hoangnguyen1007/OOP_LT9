#include "VE.h"
VE::~VE() {};
void VE::Nhap()
{
	cout << "Nhap ma ve: ";
	cin >> ma_ve;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, ho_ten);
	cout << "Nhap nam sinh: ";
	cin >> nam_sinh;
	while (cin.fail() || nam_sinh < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap nam sinh: ";
		cin >> nam_sinh;
	}
	cout << "Nhap so tro choi: ";
	cin >> so_tro_choi;
	while (cin.fail() || so_tro_choi < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap so tro choi: ";
		cin >> so_tro_choi;
	}
}
void VE::Xuat() const
{
	cout << "Ma so ve: " << ma_ve << endl;
	cout << "Ho ten: " << ho_ten << endl;
	cout << "Nam sinh: " << nam_sinh << endl;
	cout << "So tro choi: " << so_tro_choi << endl;
}
string VE::getMaVe() const
{
	return ma_ve;
}
