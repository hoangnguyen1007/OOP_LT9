#include "CongVien.h"
#include "veTronGoi.h"
#include "veTungPhan.h"
#include <algorithm>
CongVien::~CongVien()
{
	for (int i = 0; i < sl; i++)
	{
		delete ds[i];
	}
	delete[] ds;
	ds = NULL;
}
void CongVien::Nhap()
{
	cout << "Nhap so luong ve: ";
	cin >> sl;
	while (cin.fail() || sl < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap so luong ve: ";
		cin >> sl;
	}
	ds = new VE*[sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "-----Nhap thong tin ve thu " << i + 1 << "-----" << endl;
		cout << "Nhap loai ve(1. Tron goi/ 2. Toan phan): ";
		int l;
		cin >> l;
		while (cin.fail() || (l != 1 && l != 2))
		{
			cin.clear();
			cin.ignore();
			cout << "Khong hop le! Vui long nhap lai!" << endl;
			cout << "Nhap loai ve(1. Tron goi/ 2. Toan phan): ";
			int l;
			cin >> l;
		}
		if (l == 1)
		{
			ds[i] = new veTronGoi;
		}
		else
		{
			ds[i] = new veTungPhan;
		}
		ds[i]->Nhap();
	}
}
void CongVien::Xuat() const
{
	for (int i = 0; i < sl; i++)
	{
		cout << "------Thonh tin ve thu " << i + 1 << "------" << endl;
		ds[i]->Xuat();
	}
}
istream& operator>>(istream& is, CongVien& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const CongVien& x)
{
	x.Xuat();
	return os;
}
long long CongVien::TongVeTungPhan() const
{
	long long kq = 0;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tung phan")
		{
			kq += ds[i]->tinhGiaVe();
		}
	}
	return kq;
}
void CongVien::dsVeTungPhanCaoNhat() const
{
	int maxT = 0;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tung phan" && ds[i]->tinhGiaVe() > maxT)
		{
			maxT = ds[i]->tinhGiaVe();
			index = i;
		}
	}
	if (index == -1)
	{
		cout << "Khong co ve tung phan nao trong danh sach!" << endl;
		return;
	}
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tung phan" && ds[i]->tinhGiaVe() == maxT)
		{
			cout << "----------------------------------------" << endl;
			ds[i]->Xuat();
		}
	}
}
int CongVien::DemSoVeTungPhan() const
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tung phan")
		{
			dem++;
		}
	}
	return dem;
}
long long CongVien::TongTienVe() const
{
	long long kq = 0;
	for (int i = 0; i < sl; i++)
	{
		kq += ds[i]->tinhGiaVe();
	}
	return kq;
}
int CongVien::DemSoVeTronGoi() const
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tron goi")
		{
			dem++;
		}
	}
	return dem;
}
void CongVien::HoanVi(VE*& ve1, VE*& ve2)
{
	VE* tmp = ve1;
	ve1 = ve2;
	ve2 = tmp;
}
void CongVien::SapXep()
{
	for (int i = 0; i < sl - 1; i++)
	{
		for (int j = i + 1; j < sl; j++)
		{
			if (ds[i]->getLoai() == "Tung phan" && ds[j]->getLoai() == "Tron goi")
			{
				HoanVi(ds[i], ds[j]);
			}
		}
	}
	int k = 0;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == "Tron goi")
		{
			k++;
		}
		else break;
	}
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (ds[i]->getMaVe() > ds[j]->getMaVe())
			{
				HoanVi(ds[i], ds[j]);
			}
		}
	}
	for (int i = k; i < sl - 1; i++)
	{
		for (int j = i + 1; j < sl; j++)
		{
			if (ds[i]->tinhGiaVe() < ds[j]->tinhGiaVe())
			{
				HoanVi(ds[i], ds[j]);
			}
		}
	}
}