#include<iostream>
#include<string>
using namespace std;

class employee
{
public:
	int empl_num;
	string name;
	int pnmbrs[4];
	int age;
	float empl_compen;
	employee(): empl_num(0), empl_compen(0.00), age(0), name("____") 
	{
		for(int i=0;i<4;i++)
		{
			pnmbrs[i]=0;
		}
	}
	employee(int x)  
	{
		age=x;
	}
	
	void setempl_num()
	{
		int a;
		cout<<"enter employee number :";
		cin>>a;
		empl_num=a;
	}
	int getempl_num()
	{
		cout<<"employee number : ";
		return empl_num;
	}
	void printempl_num()
	{
		cout<<"employee number : ";
		cout<<empl_num;
	}
	void setname()
	{
		string a;
		cout<<"enter employee's name :";
		cin>>a;
		name=a;
	}
	string getname()
	{
		cout<<"employee name :";
		return name;
	}
	void printname()
	{
		cout<<"employee name :";
		cout<<name;
	}
	void setpnmbrs()
	{
		int a[4];
		for(int i =0;i<4;i++)
		{
			cout<<"Enter "<<i+1<<" phone number : "<<endl;
			cin>>a[i];
			pnmbrs[i]=a[i];
		}
	}
	int getpnmbrs()
	{
		for(int i =0;i<4;i++)
		{
			cout<<i+1<<" phone number : ";
			return pnmbrs[i];
			cout<<endl;
		}
	}
	void printpnmbrs()
	{
		for(int i =0;i<4;i++)
		{
			cout<<i+1<<" phone number : ";
			cout<<pnmbrs[i];
			cout<<endl;
		}
	}
	void setage()
	{
		int x;
		cout<<"enter employee's age :";
		cin>>x;
		age=x;
	}
	int getage()
	{
		cout<<" employee's age : ";
		return age;
	}
	void printage()
	{
		cout<<" employee's age : ";
		cout<<age;
	}
	void setempl_compen()
	{
		float x;
		cout<<"enter employee’s compensation in $ :";
		cin>>x;
		empl_compen=x;
	}
    float getempl_compen()
	{
		cout<<"employee’s compensation :$";
		return empl_compen;
	}
	void printempl_compen()
	{
		cout<<"employee’s compensation :$";
		cout<<empl_compen;
	}
	~employee()
	{
		cout<<"destructor is called....."<<endl;
	}
};
int main()
{
	employee *ptr=new employee [3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the data for "<<i+1<<" employee"<<endl;
		ptr[i].setempl_num();
		cout<<endl;
		ptr[i].setname();
		cout<<endl;
		ptr[i].setpnmbrs();
		cout<<endl;
		ptr[i].setage();
		cout<<endl;
		ptr[i].setempl_compen();
		cout<<endl;
	}
	cout<<"-------------VALUES BY GET FUNCTIONS-------------"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		cout<<"Data for "<<i+1<<" employee"<<endl;
		cout<<ptr[i].getempl_num();
		cout<<endl;
		cout<<ptr[i].getname();
		cout<<endl;
		cout<<ptr[i].getpnmbrs();
		cout<<endl;
		cout<<ptr[i].getage();
		cout<<endl;
		cout<<ptr[i].getempl_compen();
		cout<<endl;
	}
	cout<<"-------------VALUES BY PRINT FUNCTIONS-------------"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		cout<<"Data for "<<i+1<<" employee"<<endl;
		ptr[i].printempl_num();
		cout<<endl;
		ptr[i].printname();
		cout<<endl;
		ptr[i].printpnmbrs();
		cout<<endl;
		ptr[i].printage();
		cout<<endl;
		ptr[i].printempl_compen();
		cout<<endl;
	}
	int i=0, x=0;
	char c='y';
	while(c!='n')
	{
	cout<<"Enter the employee numbr whom data u want to update : (1,2,3) ";
	cin>>i;
	i--;
	cout<<"what u want to update? (1. employee number, 2. employee's name, 3. employee phone numbers, 4. employee's age, 5. employee’s compensation"<<endl;
	cin>>x;
	if(x=1)
	{
		ptr[i].setempl_num();
	}
	else if(x=2)
	{
		ptr[i].setname();
	}
	else if(x=3)
	{
		ptr[i].setpnmbrs();
	}
	else if(x=4)
	{
		ptr[i].setage();
	}
	else if(x=5)
	{
		ptr[i].setempl_compen();
	}
	cout<<"do u want to update something else? (y/n)";
	cin>>c;
	}
	system("pause");
	return 0;
}