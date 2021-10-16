//HA DIEM QUYNH 6151071021
#include<iostream>
using namespace std;
class person{
	private:
		string name, address;
		int age;
	public:
		string getname()
		{
			return name;
		}
		void input1()
		{
			fflush(stdin);
			cout<<"\nNhap ten: ";
			getline(cin,name);
			cout<<"\nNhap dia chi: ";
			getline(cin,address);
			cout<<"\nNhap tuoi: ";
			cin>>age;
		}
		void output1()
		{
			cout<<endl<<"Ho ten: "<<name;
			cout<<endl<<"Dia chi: "<<address;
			cout<<endl<<"Tuoi: "<<age;
		}	
};
class student: public person
{
	private:
		float score;
		string id;
	public:
		void input2()
		{
			input1();
			fflush(stdin);
			cout<<"\nNhap ID:";
			getline(cin,id);
			cout<<"\nNhap diem: ";
			cin>>score;
		}
		void output2()
		{
			output1();
			cout<<endl<<"ID: "<<id;
			cout<<endl<<"Diem: "<<score;
		}
		void rank()
		{
			if(score<5)
			{
				cout<<endl<<"Loai yeu";
			}
			if(score>=5&&score<7)
			{
				cout<<endl<<"Loai TB";
			}
			if(score<=7&&score>8.5)
			{
				cout<<"Loai kha";
			}
			if(score>=8.5)
			{
				cout<<endl<<"Loai gioi";
			}
		}
};
class teacher : public person
{
	public:
		void teach()
		{
			if(getname().compare("Nguyen Le Minh")==0)
			{
				cout<<"\nCo van lop CNTTK60";
			}
			if(getname().compare("Tran Thi Dung")==0)
			{
				cout<<"\nCo van lop CNTTK62";
			}
			if(getname().compare("Pham Thi Mien")==0)
			{
				cout<<"\nCo van lop CNTTK61";
			}
		}
};
int main()
{
	student st1; teacher t;
	cout<<"\tHOC SINH:";
	st1.input2();
	cout<<endl<<"-------------------------------------";
	st1.output2();
	st1.rank();
	cout<<endl<<"\tGIAO VIEN:";
	t.input1();
	cout<<endl<<"-------------------------------------";
	t.output1();
	t.teach();
}
