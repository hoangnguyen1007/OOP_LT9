#include "DSCongDan.h"  
#include "CongDan.h"

DSCongDan::~DSCongDan()  
{  
	delete[] ds;
	ds = NULL;
	sl = 0;
}  
int DSCongDan::getSL() const
{
	return sl;
}
void DSCongDan::Nhap()
{
	cout << "Nhap so luong cong dan: ";
	cin >> sl;
	ds = new CongDan[sl];
	while (cin.fail() || sl < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap so luong cong dan: ";
		cin >> sl;
	}
	for (int i = 0; i < sl; i++)
	{
		cout << "---Nhap thong tin cong dan thu " << i + 1 << "---" << endl;
		ds[i].Nhap();
	}
}
void DSCongDan::Xuat() const
{
	if (ds == NULL)
	{
		cout << "Danh sach cong dan rong!" << endl;
	}
	else
	{
		for (int i = 0; i < sl; i++)
		{
			cout << "------Cong dan thu "<<i + 1<<"-------" << endl;
			ds[i].Xuat();
		}
	}
}