#include "CongTy.h"
#include "nvLapTrinh.h"
#include "nvKiemChung.h"
CongTy::~CongTy()
{
	for (int i = 0; i < sl; i++)
	{
		delete nv[i];
	}
	delete[] nv;
	nv = NULL;
}
void CongTy::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> sl;
	while (cin.fail() || sl < 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Khong hop le! Vui long nhap lai!" << endl;
		cout << "Nhap so luong nhan vien: ";
		cin >> sl;
	}
	nv = new NhanVien * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "----Nhap thong tin nhan vien thu " << i + 1 << "----" << endl;
		cout << "Nhap loai nhan vien(1. Lap trinh/ 2. Kiem chung): ";
		int l;
		cin >> l;
		while (cin.fail() || (l != 1 && l != 2))
		{
			cin.clear();
			cin.ignore();
			cout << "Khong hop le! Vui long nhap lai!" << endl;
			cout << "Nhap loai nhan vien(1. Lap trinh/ 2. Kiem chung): ";
			cin >> l;
		}
		if (l == 1)
		{
			nv[i] = new nvLapTrinh;
		}
		else
		{
			nv[i] = new nvKiemChung;
		}
		nv[i]->Nhap();
	}
}
void CongTy::Xuat() const
{
	for (int i = 0; i < sl; i++)
	{
		cout << "-----Thong tin nhan vien thu " << i + 1 << "-----" << endl;
		nv[i]->Xuat();
	}
}
istream& operator>>(istream& is, CongTy& x)
{
	x.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const CongTy& x)
{
	x.Xuat();
	return os;
}
double CongTy::TrungBinhLuongNV()
{
	int dem = 0;
	long long tong = 0;
	for (int i = 0; i < sl; i++)
	{
		tong += nv[i]->tinhLuong();
		tong++;
	}
	return dem == 0 ? 0 : tong / dem;
}
void CongTy::DSNhanVienLuongThapHonTB()
{
	double tb = TrungBinhLuongNV();
	bool found = false;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->tinhLuong() < tb)
		{
			found = true;
			cout << "------------------------------" << endl;
			nv[i]->Xuat();
		}
	}
	if (!found) cout << "Khong co nhan vien nao co luong thap hon muc trung binh!" << endl;
}
void CongTy::DSNhanVienLuongToiThieu()
{
	long long min = LLONG_MAX;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->tinhLuong() < min)
		{
			index = i;
			min = nv[i]->tinhLuong();
		}
	}
	if (index == -1) cout << "Khong co nhan vien nao trong danh sach!" << endl;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->tinhLuong() == min)
		{
			cout << "------------------------------" << endl;
			nv[i]->Xuat();
		}
	}
}
void CongTy::DSNhanVienLuongCaoNhat()
{
	long long max = 0;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->tinhLuong() > max)
		{
			index = i;
			max = nv[i]->tinhLuong();
		}
	}
	if (index == -1) cout << "Khong co nhan vien nao trong danh sach!" << endl;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->tinhLuong() == max)
		{
			cout << "------------------------------" << endl;
			nv[i]->Xuat();
		}
	}
}
NhanVien* CongTy::LapTrinhLuongMax()
{
	long long max = 0;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->getLoai() == "LAP TRINH VIEN" && nv[i]->tinhLuong() > max)
		{
			index = i;
			max = nv[i]->tinhLuong();
		}
	}
	if (index == -1) return NULL;
	else return nv[index];
}
NhanVien* CongTy::KiemChungLuongMin()
{
	long long min = LLONG_MAX;
	int index = -1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->getLoai() == "KIEM CHUNG VIEN" && nv[i]->tinhLuong() < min)
		{
			index = i;
			min = nv[i]->tinhLuong();
		}
	}
	if (index == -1) return NULL;
	else return nv[index];
}