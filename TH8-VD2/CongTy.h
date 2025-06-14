#pragma once
#include "NhanVien.h"
class CongTy
{
private:
	NhanVien** nv;
	int sl;
public:
	~CongTy();
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream&, CongTy&);
	friend ostream& operator<<(ostream&, const CongTy&);
	double TrungBinhLuongNV();
	void DSNhanVienLuongThapHonTB();
	void DSNhanVienLuongToiThieu();
	void DSNhanVienLuongCaoNhat();
	NhanVien* LapTrinhLuongMax();
	NhanVien* KiemChungLuongMin();
};

