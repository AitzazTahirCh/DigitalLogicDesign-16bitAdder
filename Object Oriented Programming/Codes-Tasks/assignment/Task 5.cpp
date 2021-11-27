#include<iostream>
#include<string>
using namespace std;
class Parent
{
public:
	Parent()
	{
		cout<<"I am Parent, I got a new life"<<endl;
	}
	~Parent()
	{
		cout<<"I am Parent , I am going to die"<<endl;
	}
};

class Child: public Parent
{
public:
	Child()
	{
		cout<<"I am Child, I got a new life"<<endl;
	}
	~Child()
	{
		cout<<"I am Parent , I am going to die"<<endl;
	}
};

int main()
{
	Child *p= new Child;
	delete p;

	system("pause");
	return 0;
}