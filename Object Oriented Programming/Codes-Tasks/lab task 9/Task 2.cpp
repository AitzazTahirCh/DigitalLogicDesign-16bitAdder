#include<iostream>
using namespace std;
class Number
{
public:
	int integer;
	void set_int()
	{
		int x=1;
		while(1)
		{
			cout<<"enter value :  ";
			cin>>x;
			if(x>0 && x<=100)
			{
				integer=x;
				break;
			}
			else
			{
				cout<<"Wrong input enetr again : "<<endl;
			}
		}
	}
    void operator<(Number a)
	{
		if(this->integer<a.integer)
		{
			cout<<this->integer<<" is less than "<<a.integer<<endl;
		}
		else
		{
			cout<<this->integer<<" is greater than "<<a.integer<<endl;
		}
	}
	void operator>(Number a)
	{
		if(this->integer>a.integer)
		{
			cout<<this->integer<<" is greater than "<<a.integer<<endl;
		}
		else
		{
			cout<<this->integer<<" is less than "<<a.integer<<endl;
		}
	}
	void operator==(Number a)
	{
		if(this->integer==a.integer)
		{
			cout<<" numbers are equal "<<endl;
		}
		else
		{
			cout<<" numbers are not equal "<<endl;
		}
	}
	void operator!=(Number a)
	{
		if(this->integer!=a.integer)
		{
			cout<<" numbers are not equal "<<endl;
		}
		else
		{
			cout<<" numbers are equal "<<endl;
		}
	}
	void operator=(Number a)
	{
		this->integer=a.integer;
	}
};
int main()
{
	Number n1 , n2;
	cout<<"For first number n1 "<<endl;
	n1.set_int();
	cout<<"For second number n2"<<endl;
	n2.set_int();
	cout<<"By > operator : "<<endl;
	n1>n2;
	cout<<"By < operator : "<<endl;
	n1<n2;
	cout<<"By == operator : "<<endl;
	n1==n2;
	cout<<"By != operator : "<<endl;
	n1!=n2;
	cout<<"By = operator to assign value : "<<endl;
	n1=n2;
	cout<<"New value of n1 is : ";
	cout<<n1.integer<<endl;
	system("pause");
	return 0;
}