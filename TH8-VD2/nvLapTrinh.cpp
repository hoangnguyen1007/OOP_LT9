#include "nvLapTrinh.h"
void nvLapTrinh::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so gio lam them: ";
	cin >> so_gio_lam_them;
}
void nvLapTrinh::Xuat() const
{
	NhanVien::Xuat();
	cout << "Luong: " << tinhLuong() << endl;
}
string nvLapTrinh::getLoai() const
{
	return "LAP TRINH VIEN";
}
long long nvLapTrinh::tinhLuong() const
{
	return luong_co_ban + so_gio_lam_them * 200000;
}