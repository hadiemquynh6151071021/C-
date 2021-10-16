//HA DIEM QUYNH 6151071021
#include<iostream>
using namespace std;
class TaiKhoan  {
	private:
         float  m_fSoDu = 0;
	public:
		float baoSoDu()
		{   
            return m_fSoDu; 
		}
		void napTien(float fSoTien)
		{   
			m_fSoDu += fSoTien;  
		}
		void rutTien(float fSoTien) 
		{
			if (fSoTien <= m_fSoDu)
      	  m_fSoDu -= fSoTien;
		}  
};
class TaiKhoanTietKiem: public TaiKhoan
{
	private:
		string Kyhangui;
		float Laisuat;
		int Sothang;	
	public:
		void input()
		{
			fflush(stdin);
			cout<<"\nNhap ky hang: ";
			getline(cin,Kyhangui);
			cout<<"\nNhap lai suat: ";
			cin>>Laisuat;
			cout<<"\nNhap so thang gui:";
			cin>>Sothang;
		}
		void naptien1()
		{
			float a;
			cout<<"Nhap so tien nap: ";
			cin>>a;
			napTien(a);
			Sothang=0;
		}
		void ktrutTien()
		{
			string x;
			float b;
			fflush(stdin);
			cout<<"Nhap ky han: ";
			getline(cin,x);
			cout<<endl<<"Nhap so tien rut: ";
			cin>>b;
			if(x.compare(Kyhangui)==0)
			{
				rutTien(b);
			}
			else
			cout<<"Khong the ru tien do chua den ky han.";
		}
		void Tang()
		{
				Sothang++;
		}
		void Du()
		{
			cout<<"So du: "<<baoSoDu();
		}
};
int main()
{
	TaiKhoanTietKiem t;
	t.input();
	cout<"---------------------------------------";
	t.naptien1();
	t.ktrutTien();
	t.Du();
}

