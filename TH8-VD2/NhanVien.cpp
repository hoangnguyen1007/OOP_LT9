#include "NhanVien.h"
NhanVien::~NhanVien() {};
void NhanVien::Nhap()
{
	cout << "Nhap ma nhan vien: ";
	cin >> ma_nv;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, ho_ten);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap so dien thoai: ";
	cin >> sdt;
	cout << "Nhap email: ";
	cin >> email;
	cout << "Nhap luong co ban: ";
	cin >> luong_co_ban;
}
void NhanVien::Xuat() const
{
	cout << "Ma nhan vien: " << ma_nv << endl;
	cout << "Ho ten: " << ho_ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "Email: " << email << endl;
}
