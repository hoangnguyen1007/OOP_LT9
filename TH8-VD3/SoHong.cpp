#include "SoHong.h"
SoHong::~SoHong() {};
void SoHong::Nhap()
{
	cout << "Nhap so giay chung nhan: ";
	cin.ignore();
	getline(cin, soGiayCN);
	cout << "Nhap thong tin chu dat: "<<endl;
	chuDat.Nhap();
	cout << "Nhap so thua dat: ";
	cin >> soThuaDat;
	while (cin.fail() || soThuaDat <= 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Nhap so thua dat: ";
		cin >> soThuaDat;
	}
	cout << "Nhap so to ban do: ";
	cin >> soToBanDo;
	while (cin.fail() || soToBanDo <= 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Nhap so to ban do: ";
		cin >> soToBanDo;
	}
	cout << "Nhap dia chi thua dat: ";
	cin.ignore();
	getline(cin, diaChiThuaDat);
	cout << "Nhap dien tich: ";
	cin >> dienTich;
	while (cin.fail() || dienTich <= 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Nhap dien tich: ";
		cin >> dienTich;
	}
	cout << "Nhap ngay cap: " << endl;
	ngayCap.Nhap();
	cout << "Nhap don gia thue: ";
	cin >> donGiaThue;
	while (cin.fail() || donGiaThue <= 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Nhap don gia thue: ";
		cin >> donGiaThue;
	}
}
void SoHong::Xuat() const
{
	cout << "So giay chung nhan: " << soGiayCN << endl;
	cout << "Chu dat: " << endl;
	chuDat.Xuat();
	cout << "---------------------------------" << endl;
	cout << "So thua dat: " << soThuaDat << endl;
	cout << "So ban do: " << soToBanDo << endl;
	cout << "Dia chi thua dat: " << diaChiThuaDat << endl;
	cout << "Dien tich: " << dienTich << endl;
	cout << "Ngay cap: "; ngayCap.Xuat(); cout << endl;
	cout << "Loai dat: " << getLoai() << endl;
	cout << "Tien thue dat: " << TinhTienThue() << endl;
}
int SoHong::TinhTienThue() const
{
	return dienTich * donGiaThue;
}