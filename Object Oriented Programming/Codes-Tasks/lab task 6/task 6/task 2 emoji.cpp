#include<iostream>
#include<string>
using namespace std;

class romanType
{
    public:
		char a[];
		void setr(string x)
		{
			cout << x << endl;
			cout << "value in integer";
			for (int i = 0; i < x.length(); i++)
			{
				if (a[i] = 'M')
				{
					a[i] = 1000;
				}
				if (a[i] = 'D')
				{
					a[i] = 500;
				}
				if (a[i] = 'C')
				{
					a[i] = 100;
				}
				if (a[i] = 'L')
				{
					a[i] = 50;
				}
				if (a[i] = 'X')
				{
					a[i] = 10;
				}
				if (a[i] = 'V')
				{
					a[i] = 5;
				}
				if (a[i] = 'I')
				{
					a[i] = 1;
				}
				cout << a[i];
			}
		}
		
};


int main()
{
	string x;
	romanType r;
	cout << " Enter the value in Roman : ";
	cin >> x;
	r.setr(x);
	
	system("pause");
	return 0;
}