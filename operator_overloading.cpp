#include<iostream>
#include<string>
#include<list>
using namespace std;
class Ytchannel
{
	public:
	string name;
	int sub;
		public:
			Ytchannel()
			{
				name="none";
				sub=0;
			}
			Ytchannel(string nm,int no)
			{
				name=nm;
				sub=no;
			}
};
class Collection
{
	public:
	list<Ytchannel>mylist;
	void operator+=(Ytchannel &channel)
    {
        mylist.push_back(channel);	
	}	
};
ostream& operator<<(ostream& COUT ,Ytchannel& ytc)

{
	COUT<<ytc.name;
	COUT<<ytc.sub;
	return COUT;
}
ostream& operator<<(ostream& COUT ,Collection& mc)

{
	
	for(Ytchannel ytc:mc.mylist)
	{
		COUT<<ytc;
	}
	return COUT;
}

 
int main()
{
	Ytchannel yt1("Darshan",12345);
	Ytchannel yt2("DKTE",45);
	collection mc;
	mc+=yt1;
	mc+=yt2;
	cout<<mc;

	return 0;
}
