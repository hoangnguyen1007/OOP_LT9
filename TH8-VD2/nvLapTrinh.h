#pragma once
#include "NhanVien.h"
class nvLapTrinh : public NhanVien
{
private:
	int so_gio_lam_them;
public:
	void Nhap();
	void Xuat() const;
	string getLoai() const;
	long long tinhLuong() const;
};

