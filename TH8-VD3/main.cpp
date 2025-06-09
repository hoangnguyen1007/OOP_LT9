#include "QuanLyDat.h"
int main()
{
	QuanLyDat x;
	x.Nhap();
	cout << "====DANH SACH CAC SO HONG====" << endl;
	x.Xuat();
	cout << "====THONG TIN CAC THUA DAT HET HSD====" << endl;
	x.DatNongNghiepHetHSD();
	cout << "====THONG TIN THUA DAT CO TIEN THUE NHIEU NHAT====" << endl;
	x.ThuaDatCoThueMax();
}