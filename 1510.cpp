//HA DIEM QUYNH 6151071021
#include<iostream>
using namespace std;
class A{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
};
class B: private  A{
	private:
		int v;
	public:
		void show();
};
void B::show()
{
	cout<<y;
}
class C: protected B
{
	public:
		void show(){
			cout<<y;
		}
};
int main()
{
	A a;
	B b;
	cout<<a.z;
	b.show();
}
