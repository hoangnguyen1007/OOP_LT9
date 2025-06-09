#pragma once
#include "VE.h"
class CongVien
{
private:
	VE** ds;
	int sl;
public:
	~CongVien();
	void Nhap();
	void Xuat() const;
	friend istream& operator>>(istream&, CongVien&);
	friend ostream& operator<<(ostream&, const CongVien&);
	long long TongTienVe() const;
	long long TongVeTungPhan() const;
	void dsVeTungPhanCaoNhat() const;
	int DemSoVeTungPhan() const;
	int DemSoVeTronGoi() const;
	void HoanVi(VE*& ve1, VE*& ve2);
	void SapXep();
};