#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int id;
	Student(string name,int id)
	{
		this->name=name;
		this->id=id;
	}
	void display()
	{
		cout<<"NAME="<<name<<"\t ID="<<id;
	}
};
int main()
{
	Student s1=Student("Darshan",37);
	s1.display();
	return 0;
}
