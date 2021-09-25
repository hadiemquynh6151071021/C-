#include<iostream>
using namespace std;
class Phanso
{
	private:
		float tu, mau;
	public:
		void nhap();
		void xuat();
		Phanso tinhtoan(Phanso ps1,Phanso ps2);
		gettu()
		{
			return tu;
		}
		getmau()
		{
			return mau;
		}
};
void Phanso::nhap()
{
	cout<<"Nhap tu:";cin>>tu;
	cout<<"\nNhap mau:";cin>>mau;
}
void Phanso::xuat()
{
	cout<<"Phan so la:"<<tu<<"/"<<mau;
}
void Phanso::tinhtoan(Phanso ps1, Phanso ps2)
{
	float tong=(ps1.gettu()*ps2.getmau()+ps2.gettu()*ps1.getmau())/(ps1.getmau()*ps2.getmau());
	cout<<"Tong hai phan so la:"<<tong<<endl;
	float tru=(ps1.gettu()*ps2.getmau()-ps2.gettu()*ps1.getmau())/(ps1.getmau()*ps2.getmau());
	cout<<"Hieu hai phan so la:"<<tru<<endl;
}
int main()
{
	Phanso ps1, ps2;
	ps1.nhap();
	ps1.xuat();
	ps2.nhap();
	ps2.xuat();
	tinhtoan(ps1,ps2);
}
