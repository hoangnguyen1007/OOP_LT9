#pragma once
#include <iostream>
#include <string>
using namespace std;
class CongDan
{
private:
	string ho_ten, cccd, dia_chi;
	int nam_sinh;
public:
	void Nhap();
	void Xuat() const;
};

