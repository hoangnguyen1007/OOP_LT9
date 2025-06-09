#pragma once
#include "VE.h"
class veTungPhan : public VE
{
public:
	~veTungPhan();
	int tinhGiaVe() const;
	string getLoai() const;
};