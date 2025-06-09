#pragma once
#include "SoHong.h"
class DatNongNghiep : public SoHong
{
private:
	int thoi_han;
public:
	int getThoiHan() const;
	void Nhap();
	void Xuat() const;
	string getLoai() const;
};

