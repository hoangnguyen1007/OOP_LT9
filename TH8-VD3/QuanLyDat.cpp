#define _CRT_SECURE_NO_WARNINGS
#include "QuanLyDat.h"
#include "DatNongNghiep.h"
#include "PhiNongNghiep.h"
#include <ctime>
QuanLyDat::~QuanLyDat()
{
	for (int i = 0; i < sl; i++)
	{
		delete ds[i];
	}
	delete[] ds;
	ds = NULL;
	sl = 0;
}
void QuanLyDat::Nhap()
{
	cout << "Nhap so luong so hong: ";
	cin >> sl;
	while (sl < 0 || cin.fail())
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap so luong so hong: ";
		cin >> sl;
	}
	ds = new SoHong*[sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "----Nhap so hong thu " << i + 1 << "----" << endl;
		cout << "Nhap loai dat(1. Nong nghiep/ 2. Phi nong nghiep): ";
		int l;
		cin >> l;
		while (cin.fail() || (l != 1 && l != 2))
		{
			cin.clear();
			cin.ignore();
			cout << "Khong hop le! Vui long nhap lai!" << endl;
			cout << "Nhap loai dat(1. Nong nghiep/ 2. Phi nong nghiep): ";
			cin >> l;
		}
		if (l == 1)
		{
			ds[i] = new DatNongNghiep;
		}
		else
		{
			ds[i] = new PhiNongNghiep;
		}
		ds[i]->Nhap();
	}
}
void QuanLyDat::Xuat() const
{
	for (int i = 0; i < sl; i++)
	{
		cout << "----So hong thu " << i + 1 << "----" << endl;
		ds[i]->Xuat();
	}
}
int QuanLyDat::getSL() const
{
	return sl;
}
void QuanLyDat::DatNongNghiepHetHSD() const
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	bool found = false;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "NONG NGHIEP" && ((DatNongNghiep*)ds[i])->getThoiHan() < ltm->tm_year + 1900)
		{
			cout << "----------------------------" << endl;
			ds[i]->Xuat();
			found = true;
		}
	}
	if (!found) cout << "Khong co dat nong nghiep nao het han su dung!" << endl;
}
void QuanLyDat::ThuaDatCoThueMax() const
{
	long long maxT = 0;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->TinhTienThue() > maxT)
		{
			maxT = ds[i]->TinhTienThue();
			index = i;
		}
	}
	if (index == -1) cout << "Khong co so hong nao trong danh sach!" << endl;
	else
	{
		ds[index]->Xuat();
	}
}