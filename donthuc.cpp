//Ha Diem Quynh 6151071021
#include<iostream>
#include<math.h>
using namespace std;
class donthuc
{
	private:
		float heso,somu;
	public:
		void nhap();
		void xuat();
		float giatri(float t);
		void cong(donthuc p);
		void tru(donthuc p);
		void nhan(donthuc p);
		void chia(donthuc p);
		void daoham();
		void nguyenham();
		float getheso();
		float getsomu();
		void sosanh(donthuc p);
		void nhankhac(donthuc p);
		void chiakhac(donthuc p);
};
void donthuc::nhap()
{
	cout<<endl<<"Nhap he so";
	cin>>heso;
	cout<<endl<<"Nhap so mu ";
	cin>>somu;	
}
void donthuc::xuat()
{
	cout<<heso<<"x^"<<somu;
}
float donthuc::giatri(float t)
{
	return heso*(pow(t,somu));
}
void donthuc::cong(donthuc p)
{
	cout<<heso+p.heso<<"x^"<<somu;
}
void donthuc::tru(donthuc p)
{
	cout<<heso-p.heso<<"x^"<<somu;
}
void donthuc::nhan(donthuc p)
{
	cout<<heso*p.heso<<"x^"<<somu*2;
}
void donthuc::chia(donthuc p)
{
	cout<<heso/p.heso<<"x";
}
void donthuc::daoham()
{
	cout<<somu*heso<<"x^"<<somu-1;
}
void donthuc::nguyenham()
{
	cout<<"("<<heso<<"x^"<<somu+1<<")"<<"/"<<somu+1;
}
float donthuc::getheso()
{
	return heso;
}
float donthuc::getsomu()
{
	return somu;
}
void donthuc::sosanh(donthuc p)
{
	if(heso>p.heso)
	{
		cout<<"nho hon.";
	}
	else if(heso<p.heso)
	{
		cout<<"lon hon.";
	}
	else cout<<"Hai don thuc bang nhau.";
}
void donthuc::nhankhac(donthuc p)
{
	cout<<heso*p.heso<<"x^"<<somu+p.somu;
}
void donthuc::chiakhac(donthuc p)
{
	cout<<heso/p.heso<<"x^"<<somu-p.somu;
}
int main()
{
	donthuc y1,y2;
	cout<<"\tDon thuc 1:";
	y1.nhap();
	y1.xuat();
	cout<<endl<<"Dao ham :";
	y1.daoham();
	cout<<endl<<"Nguyen ham la:";
	y1.nguyenham();
	cout<<endl<<"He so don thuc la:"<<y1.getheso();
	cout<<endl<<"So mu don thuc la:"<<y1.getsomu();
	cout<<endl<<"Gia tri don thuc"<<y1.giatri(5);
	cout<<endl<<"\tDon thuc 2:";
	y2.nhap();
	y2.xuat();
	cout<<endl<<"Dao ham :";
	y2.daoham();
	cout<<endl<<"Nguyen ham la:";
	y2.nguyenham();
	cout<<endl<<"He so don thuc la:"<<y2.getheso();
	cout<<endl<<"So mu don thuc la:"<<y2.getsomu();
	cout<<endl<<"Gia tri don thuc"<<y2.giatri(5);
	cout<<endl<<"Gia tri phep cong:";
	y1.cong(y2);	
	cout<<endl<<"Gia tri phep tru:";
	y1.tru(y2);
	cout<<endl<<"Gia tri phep nhan:";
	y1.nhan(y2);
	cout<<endl<<"Gia tri phep chia:";
	y1.chia(y2);
	cout<<endl;
	y1.sosanh(y2);
	
}
