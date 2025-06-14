#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	string ma_nv, ho_ten, sdt, email;
	int tuoi;
	long long luong_co_ban;
public:
	virtual ~NhanVien();
	virtual void Nhap();
	virtual void Xuat() const;
	virtual string getLoai() const = 0;
	virtual long long tinhLuong() const = 0;
};

