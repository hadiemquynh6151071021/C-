//Ha Diem Quynh 6151071021
#include<iostream>
#include<math.h>
class Hocsinh{
	private:
		string hoten;
		float diemtoan;
		float dievan;
	public:
		void nhap();
		void xuat();
		string gethoten();
		float getdiemvan();
		float getdiemtoan();
		float diemtb();
		void xeploai();
};
void Hocsinh::nhap()
{
	cout<<"Nhap ho ten sinh vien:"<<endl;
	getline(cin,hoten);
	cout<<"Nhap diem toan"<<endl;
	cin>>diemtoan;
	cout<<"Nhap diem van"<<endl;
	cin>>diemvan;
}
void Hocsinh::xuat()
{
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Diem toan: "<<diemtoan<<endl;
	cout<<"Diem van: "<<diemvan<<endl;	
}
string Hocsinh::gethoten()
{
	return hoten;
}
float Hocsinh::getdiemtoan()
{
	return diemtoan;
}
float Hocsinh::getdiemvan()
{
	return diemvan;
}
float Hocsinh::diemtb()
{
	return (diemtoan+diemvan)/2;
}
void Hocsinh::xeploai()
{
	if(diemtb()>=8)
		cout<<"Xep loai gioi."<<endl;
		else if(diemtb()<8&&diemtb>=7)
			cout<<"Xep loai kha."<<endl;
				else if(diemtb()<7&&diemtb>=5)
					cout<<"Xep loat trung binh"<<endl;
						else cout<<"Xep loai yeu.";
}
int main()
{
}

