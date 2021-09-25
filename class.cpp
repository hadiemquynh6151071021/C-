// Ha Diem Quynh MSV 6151071021
#include<iostream>
using namespace std;
class Sinhvien
{
	private:
		string ten;
		string gioitinh;
		string ngaysinh;
		float diemtb;
	public:
		void nhap();
		void xuat();
};
void Sinhvien::nhap()
{
	cout<<"Nhap ten sinh vien:";
	cin>>ten;
	cout<<endl<<"Nhap gioi tinh:";
	cin>>gioitinh;
	cout<<endl<<"Nhap ngay sinh:";
	cin>>ngaysinh;
	cout<<endl<<"Nhap diem trung binh:";
	cin>>diemtb;
}
void Sinhvien::xuat()
{
	cout<<"Ho va ten:"<<ten<<endl;
	cout<<"Gioi tinh:"<<gioitinh<<endl;
	cout<<"Ngay sinh:"<<ngaysinh<<endl;
	cout<<"Diem TB:"<<diemtb;
}
int main()
{
	Sinhvien sv1,sv2;
	sv1.nhap();
	sv1.xuat();
	sv2.nhap();
	sv2.xuat();
}
