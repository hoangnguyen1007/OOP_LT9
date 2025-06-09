#include "veTungPhan.h"
veTungPhan::~veTungPhan() {};
int veTungPhan::tinhGiaVe() const
{
	return 70000 + 20000 * so_tro_choi;
}
string veTungPhan::getLoai() const
{
	return "Tung phan";
}