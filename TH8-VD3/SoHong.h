#pragma once
#include "DSCongDan.h"
#include "NgayThangNam.h"
class SoHong
{
protected:
	string soGiayCN;
	DSCongDan chuDat;
	int soThuaDat, soToBanDo, donGiaThue;
	string diaChiThuaDat;
	double dienTich;
	NgayThangNam ngayCap;
public:
	virtual ~SoHong();
	virtual void Nhap();
	virtual void Xuat() const;
	virtual string getLoai() const = 0;
	int TinhTienThue() const;
};

