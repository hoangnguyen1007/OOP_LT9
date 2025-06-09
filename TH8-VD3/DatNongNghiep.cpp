#include "DatNongNghiep.h"
int DatNongNghiep::getThoiHan() const
{
	return thoi_han;
}
void DatNongNghiep::Nhap()
{
	SoHong::Nhap();
	cout << "Nhap thoi han: ";
	cin >> thoi_han;
	while (cin.fail() || thoi_han < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Nhap thoi han: ";
		cin >> thoi_han;
	}
}
void DatNongNghiep::Xuat() const
{
	SoHong::Xuat();
	cout << "Thoi han: " << thoi_han << endl;
}
string DatNongNghiep::getLoai() const
{
	return "NONG NGHIEP";
}