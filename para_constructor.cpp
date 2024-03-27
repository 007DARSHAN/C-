#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		int roll_no;
		Student(string n,int r)
		{
			name=n;
			roll_no=r;
		}
		void display()
		{
			cout<<"NAME:"<<name<<endl;
			cout<<"ROLL NO:"<<roll_no<<endl;
		}
		~Student()
		{
			cout<<"destructor called";
		}
};
int main()
{
	Student s1=Student("darshan",37);
	s1.display();
	return 0;
}
