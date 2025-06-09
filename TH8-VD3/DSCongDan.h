#pragma once
#include "CongDan.h"
class DSCongDan
{
private:
	CongDan* ds;
	int sl;
public:
	~DSCongDan();
	int getSL() const;
	void Nhap();
	void Xuat() const;
};

