#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		int id;
	void getdata()
	{
		cout<<"ENTER THE ID AND NAME OF THE STUDENT \n";
		cin>>id>>name;
	}	
	void display()
	{
		cout<<"ID="<<id<<"\t NAME="<<name<<endl;
	}
};
int main()
{
    int n,i;
    cout<<"ENTER THE NUMBER OF STUDENTS : ";
    cin>>n;
	Student s[n];
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	cout<<"\nDETAILS OF THE "<<n<<" STUDENTS :"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].display();
	}
	return 0;
}
