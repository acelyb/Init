#include<iostream>
using namespace std;
class vol
{
	int length;
	int width;
	int heigth;
	public:
		void input();
		void volcal();
		void scal();
};
int main()
{
	vol a,b;
	a.input();
	b.input();
	a.volcal();
	b.volcal();
	a.scal();
	b.scal();
	return 0;
}
void vol::input()
{
	cout<<"�����볤���"<<endl;
	cin>>length>>width>>heigth;
}
void vol::volcal()
{
	int t=length*width*heigth;
	cout<<"�����"<<t<<endl;
}
void vol::scal()
{
	int a=length*width;
	int b=length*heigth;
	int c=heigth*width;
	int v=2*(a+b+c);
	cout<<"�������"<<v<<endl;
}
