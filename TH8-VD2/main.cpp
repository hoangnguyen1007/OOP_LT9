#include "CongTy.h"
int main()
{
	CongTy x;
	cin >> x;
	cout << "=====DANH SACH NHAN VIEN=====" << endl;
	cout << x;
	cout << "=====NHAN VIEN CO LUONG THAP HON TRUNG BINH=====" << endl;
	x.DSNhanVienLuongThapHonTB();
	cout << "=====NHAN VIEN CO MUC LUONG TOI THIEU=====" << endl;
	x.DSNhanVienLuongToiThieu();
	cout << "=====NHAN VIEN CO MUC LUONG CAO NHAT=====" << endl;
	x.DSNhanVienLuongCaoNhat();
	cout << "====NHAN VIEN LAP TRINH CO LUONG CAO NHAT====" << endl;
	if (x.LapTrinhLuongMax() == NULL) cout << "Khong co nhan vien lap trinh nao trong danh sach!" << endl;
	else x.LapTrinhLuongMax()->Xuat();
	cout << "====NHAN VIEN KIEM CHUNG CO LUONG THAP NHAT====" << endl;
	if (x.KiemChungLuongMin() == NULL) cout << "Khong co nhan vien lap trinh nao trong danh sach!" << endl;
	else x.KiemChungLuongMin()->Xuat();
}