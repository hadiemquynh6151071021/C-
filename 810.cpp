//HA DIEM QUYNH 6151071021
#include<iostream>
using namespace std;
class Sinhvien{
	private:
		string MSSV, HoTen, Lop;
		int NamSinh;
		float DiemTB;
	public:
		friend istream& operator >> (istream &vao, Sinhvien &sv);
		friend ostream& operator << (ostream &ra,const Sinhvien &sv);
		bool operator > (Sinhvien sv1);
		bool operator < (Sinhvien sv1);
		float getDiemTb();
};
istream & operator >> (istream & vao, Sinhvien &sv)
{
	cout <<"Nhap MSV: ";
	fflush(stdin);
	getline(vao,sv.MSSV);
	cout <<endl<<"Nhap ho va ten: ";
	getline(vao,sv.HoTen);
	fflush(stdin);
	cout<<endl<<"Nhap lop: ";
	getline(vao,sv.Lop);
	fflush(stdin);
	cout<<endl<<"Nhap nam sinh: ";
	vao>>sv.NamSinh;
	cout<<endl<<"Nhap diem trung binh: ";
	vao>>sv.DiemTB;
	return vao;
}
ostream& operator << (ostream &ra, const Sinhvien &sv)
{
	ra<<"\t"<<sv.MSSV<<"\t"<<sv.HoTen<<"\t"<<sv.NamSinh<<"\t"<<sv.Lop<<"\t"<<sv.DiemTB<<endl;
	return ra;
}
float Sinhvien::getDiemTb()
{
	return this->DiemTB;
}
bool Sinhvien::operator >(Sinhvien sv1)
{
	if(DiemTB>sv1.DiemTB)
	{
		return true;
	}
	else return false;
}
bool Sinhvien::operator <(Sinhvien sv1)
{
	if(NamSinh<sv1.NamSinh)
	{
		return true;
	}
	else return false;
}
void Nhap(int n, Sinhvien a[])
{
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin sinh vien thu "<<i<<endl;
		cin>>a[i];
	}
}
void Xuat(int n, Sinhvien a[])
{
	for (int i=0;i<n;i++)
	{
		cout<<"Sinh vien thu "<<i+1<<":"<<endl<<a[i]<<endl;
		
	}
}
void Sapxep(int n,Sinhvien a[])
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(a[j]>a[i]);
			{
				Sinhvien t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	Xuat(n,a);
}
void SapxepDTB(int n,Sinhvien a[])
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(a[j]<a[i]);
			{
				Sinhvien t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	Xuat(n,a);
}
void Thongke(int n,Sinhvien a[])
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].getDiemTb()<1.0)
		{
			dem++;
		}
	}
	cout<<"So sinh vien bi canh cao la:"<<dem;
}
int main()
{
	Sinhvien a[100];
	int n;
	cout<<"Nhap so sv ";
	cin>>n;
	Nhap(n,a);
	Xuat(n,a);
	cout<<endl<<"---------------------------------------------";
	Sapxep(n,a);
	cout<<endl<<"---------------------------------------------";
	Sapxep(n,a);
	cout<<endl<<"---------------------------------------------";
	Thongke(n,a);	
}
