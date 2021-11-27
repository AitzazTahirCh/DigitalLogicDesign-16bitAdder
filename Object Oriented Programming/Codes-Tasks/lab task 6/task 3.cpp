#include<iostream>
#include<string>
using namespace std;

class dayType
{
    public:
	string day[7];
	string d;
	dayType()
	{
		day[0]="monday";
		day[1]="tuesday";
		day[2]="wednesday";
		day[3]="thursday";
		day[4]="friday";
		day[5]="saturday";
		day[6]="sunday";
	}
	void setday(string x)
	{
		for(int i=0;i<=6;i++)
		{
			if(day[i]==x)
			{
				d=day[i];
			}
		}
	}
	void printday()
	{
		cout << "Day by print function : " << d;
	}
	string returnday()
	{
		cout<<" Day by return function :";
		return d;
	}
	string rnextday()
	{
		cout<<" Next Day by return function :";
		for(int i=0;i<=6;i++)
		{
			if(d==day[i])
			{
				i++;
				if(i>6)
				{
					i=0;
				}
				return day[i];
			}
		}
	}
	string rprevday()
	{
		cout<<" Previous Day by return function :";
		for(int i=0;i<=6;i++)
		{
			if(d==day[i])
			{
				i--;
				if(i<0)
				{
					i=7;
				}
				return day[i];
			}
		}
	}
string afinc(int x)
{
	for(int i=0;i<=6;i++)
		{
			if(d==day[i])
			{
				if(x<7 && x>=0)
				{
					i=i+x;
					if(i>6)
					{
						i=0;
					}
					return day[i];
				}
				else
				{
					while(x>6)
					{
						x=x-7;
					}
					i=i+x;
					if(i>=6)
					{
						i=0;
					}
					return day[i];
				}
			}

	     }
}
};

int main()
{
	dayType d;
	string x;
	int a;
	cout<<"enter the day :";
	cin>>x;
	d.setday(x);
	cout<<endl;
	d.printday();
	cout<<endl;
	cout<<d.returnday();
	cout<<endl;
	cout<<d.rnextday();
	cout<<endl;
	cout<<d.rprevday();
	cout<<endl;
	cout<<"enter the value of which u want to increment : ";
	cin>>a;
	cout<<d.afinc(a);
	cout<<endl;
	system("pause");
	return 0;
}