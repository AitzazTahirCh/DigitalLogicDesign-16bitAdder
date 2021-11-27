#include<iostream>
#include<string>
using namespace std;

class romanType
{
    public:
		string x;
		void setr(string a)
		{
			x = a;
			int c=0;
			cout << "value in integer";
			for (int i = 0; i < x.length(); i++)
			{
				if (x[i] == 'M')
				{
					c += 1000;
				}
				else if (x[i] == 'D')
				{
					c += 500;
				}
				else if (x[i] == 'C')
				{
					c += 100;
				}
				else if (x[i] == 'L')
				{
					c += 50;
				}
				else if (x[i] == 'X')
				{
					c += 10;
				}
				else if (x[i] == 'V')
				{
					c += 5;
				}
				else if (x[i] == 'I')
				{
					c += 1;
				}
				
			}
			cout << c << endl;
		}
		
};


int main()
{
	string x;
	romanType r;
	int a = 0;
	cout << " Enter the value in Roman : ";
	cin >> x;
	cout << "do u want ans in roman or decimal? (1. Roman , 2. Decimal )";
	cin >> a;
	if (a == 1)
	{
		cout << "value in roman :" << x;
	}
    else if (a == 2)
	{
		r.setr(x);
	}
	system("pause");
	return 0;
}