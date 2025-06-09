#pragma once
#include "SoHong.h"
class QuanLyDat
{
private:
	SoHong** ds;
	int sl;
public:
	~QuanLyDat();
	void Nhap();
	void Xuat() const;
	int getSL() const;
	void DatNongNghiepHetHSD() const;
	void ThuaDatCoThueMax() const;
};

