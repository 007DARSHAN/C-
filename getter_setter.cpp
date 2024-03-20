#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b,c;
		int geta()
		{
			return a;
		}
		void seta(int a1)
		{
			a=a1;
		}int getb()
		{
			return b;
		}
		void setb(int b1)
		{
			b=b1;
		}int getc()
		{
			return c;
		}
		void setc(int c1)
		{
			c=c1;
		}
};
int main()
{
	int a1,b1,c1;
	cout<<"enter the value of a1,b1 and c1"<<endl;
	cin>>a1>>b1>>c1;
	stud s1;
	s1.seta(a1);
	s1.setb(b1);
	s1.setc(c1);
	cout<<s1.geta()+s1.getb()+s1.getc();
	return 0;
}
