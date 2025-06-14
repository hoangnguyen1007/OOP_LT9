#pragma once
#include "NhanVien.h"
class nvKiemChung : public NhanVien
{
private:
	int so_loi;
public:
	void Nhap();
	void Xuat() const;
	string getLoai() const;
	long long tinhLuong() const;
};

