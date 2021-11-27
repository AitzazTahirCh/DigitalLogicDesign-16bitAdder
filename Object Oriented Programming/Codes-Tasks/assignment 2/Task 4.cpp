#include<iostream>
#include<string>
using namespace std;
class base
{
	friend class b;
public:
	
	int real,imag;
	void first_num()   //function to enter first complex number
	{
		cout<<"Enter real and imaginary part of a complex number of base class : "<<endl;
		cout<<"real : ";
		cin>>real;
		cout<<"imag : ";
		cin>>imag;
		cout<<endl;
	}
};
class derived:public base
{
	friend class b;    //making class b friend of derived class
public:
	
	int real1,imag1;
	int areal,aimag;
	void second_num()     //function to enter second complex number
	{
		cout<<"Enter real and imaginary part of a complex number of derived class : "<<endl;
		cout<<"real : ";
		cin>>real1;
		cout<<"imag : ";
		cin>>imag1;
		cout<<endl;
	}
	void addition()     //function for addition of both complex numbers
	{
		areal=real+real1;
		aimag=imag+imag1;
		if(aimag<0)
		{
			cout<<"complex number after addition : "<<areal<<aimag<<"i"<<endl;
		}
		else
		{
		cout<<"complex number after addition : "<<areal<<"+"<<aimag<<"i"<<endl;
		}
	}
	void difference(derived d);
};
class b
{
public:
	void difference(derived d)     //function for difference of both complex numbers
	{
		d.areal=d.real-d.real1;
		d.aimag=d.imag-d.imag1;
		if(d.aimag<0)
		{
			cout<<"complex number after subtraction : "<<d.areal<<d.aimag<<"i"<<endl;
		}
		else
		{
		cout<<"complex number after subtraction : "<<d.areal<<"+"<<d.aimag<<"i"<<endl;
		}
	}
};

int main()
{
	derived d;
	d.first_num();
	d.second_num();
	cout<<"----Addition by base and inherited derived class----"<<endl;
	d.addition();
	cout<<endl<<"----Subtraction by friend class----"<<endl;
	b b;
	b.difference(d);

	system("pause");
	return 0;
}