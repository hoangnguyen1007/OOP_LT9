#include "nvKiemChung.h"
void nvKiemChung::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so loi phat hien duoc: ";
	cin >> so_loi;
}
void nvKiemChung::Xuat() const
{
	NhanVien::Xuat();
	cout << "Luong: " << tinhLuong() << endl;
}
string nvKiemChung::getLoai() const
{
	return "KIEM CHUNG VIEN";
}
long long nvKiemChung::tinhLuong() const
{
	return luong_co_ban + so_loi * 50000;
}
