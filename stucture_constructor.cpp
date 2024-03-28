#include<iostream>
using namespace std;
struct stud
{
	int id;
	string name;
	stud(int i,string n)
	{
		id=i;
		name=n;
	}
	void disp()
	{
		cout<<id<<"\t"<<name<<endl;
	}
};
int main()
{
	int i;
	string n;
	cout<<"enter the value"<<endl;
	cin>>i>>n;
	stud s1=stud(i,n);
	s1.disp();
	return 0;
}

