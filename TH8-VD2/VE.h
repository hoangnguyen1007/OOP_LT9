#pragma once
#include <iostream>
#include <string>
using namespace std;
class VE
{
protected:
	string ma_ve, ho_ten;
	int nam_sinh, so_tro_choi;
public:
	virtual ~VE();
	virtual void Nhap();
	virtual void Xuat() const;
	virtual string getLoai() const = 0;
	virtual int tinhGiaVe() const = 0;
	string getMaVe() const;
};

