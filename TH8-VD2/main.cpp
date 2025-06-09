#include "CongVien.h"
int main()
{
	CongVien x;
	cin >> x;
	cout << "====DANH SACH CAC VE====" << endl;
	cout << x;
	cout << "====TONG TIEN VE====" << endl;
	cout << "Tong tien ve cong vien thu duoc la: " << x.TongTienVe() << endl;
	cout << "====SO LUONG TUNG LOAI VE====" << endl;
	cout << "So ve tron goi: " << x.DemSoVeTronGoi() << endl;
	cout << "So ve tung phan: " << x.DemSoVeTungPhan() << endl;
	cout << "====DANH SACH VE TUNG PHAN CAO NHAT====" << endl;
	x.dsVeTungPhanCaoNhat();
	x.SapXep();
	cout << "====DANH SACH VE SAU KHI SAP XEP====" << endl;
	cout << x;
}