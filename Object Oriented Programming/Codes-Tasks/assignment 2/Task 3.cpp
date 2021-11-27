#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
	string name;
	int age;
	void set_values()      //set function to take input and save record of name and age
	{
		string x;
		cout<<"Enter name :";
		cin>>x;
		name=x;
		int c;
		cout<<"Enter age :";
		cin>>c;
		age=c;
	}
	void change_values()   //function to change values of name or age according user's consent
	{
		string a;
		char s='n';
		cout<<"Do u want to change name or age? (y/n)  ";
		cin>>s;
		if(s=='y')
		{
		cout<<"What do u want to change name or age?  ";
		cin>>a;
		if(a=="name")
		{
			string x;
		    cout<<"Enter new name :";
		    cin>>x;
		    name=x;
			cout<<"Name has been changed successfuly. "<<endl;
			string v;
			cout<<"do u also want to change age?(yes/no) ";
			cin>>v;
			if(v=="yes")
			{
				int x;
		    cout<<"Enter new age :";
		    cin>>x;
			age=x;
			cout<<"Age has been changed successfuly. "<<endl;
		    }
			else if(v=="no")
			{
			}
		}
		else if(a=="age")
		{
			int x;
		    cout<<"Enter new age :";
		    cin>>x;
			age=x;
			cout<<"Age has been changed successfuly. "<<endl;
			string v;
			cout<<"do u also want to change name?(yes/no) ";
			cin>>v;
			if(v=="yes")
			{
			string x;
		    cout<<"Enter new name :";
		    cin>>x;
		    name=x;
			cout<<"Name has been changed successfuly. "<<endl;
		    }
			else if(v=="no")
			{
			}
		}
		}
		else
		{
		}
	}
	void print_address(person p)    //function to print the address of respective object
	{
		cout<<"address : "<< this<<endl;
	}
	void del_record()
	{
		char x='n';
		cout<<" Do u want to delete (his/her) record? (y/n) ";
		cin>>x;
		if(x=='y')
		{
			name="  ";
			age=0;
			cout<<" --Record is deleted-- "<<endl;
		}
		else
		{}
	}
};

class student: public person    //student class inheriting properties of person class
{

};
class employee: public person   //employee class inheriting properties of person class
{

};
int main()
{
	cout<<"For base person class : "<<endl;
	person p[2];
	for(int i=0;i<2;i++)
	{
	cout<<"for "<<i+1<<" person : "<<endl;
	p[i].set_values();
	p[i].change_values();
	p[i].del_record();
	p[i].print_address(p[i]);
	cout<<endl;
	}
	cout<<endl<<"For derived student class : "<<endl;
	student s[2];
	for(int i=0;i<2;i++)
	{
	cout<<"for "<<i+1<<" student : "<<endl;
	s[i].set_values();
	s[i].change_values();
	s[i].del_record();
	s[i].print_address(s[i]);
	cout<<endl;
	}
	cout<<endl<<"For derived employee class : "<<endl;
	employee e[2];
	for(int i=0;i<2;i++)
	{
	cout<<"for "<<i+1<<" employee : "<<endl;
	e[i].set_values();
	e[i].change_values();
	e[i].del_record();
	e[i].print_address(e[i]);
	cout<<endl;
	}

	system("pause");
	return 0;
}