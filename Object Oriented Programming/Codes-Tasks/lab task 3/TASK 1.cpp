#include<iostream>
#include<string>
using namespace std;


void table(int x, int i=1)
{
	
	if(i>10)
	{
		return;
	}
	else
	{
		cout << x << " * " << i << " = " << x * i << endl;
		i++;
		table(x, i);
	}
}


int main()
{
	int x=0;
	cout << "enter the no. whose table u want to print :";
	cin >> x;
	table(x);
	system("pause");
	return 0;
}