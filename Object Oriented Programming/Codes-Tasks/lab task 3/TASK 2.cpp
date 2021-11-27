5#include <iostream>
using namespace std;
int print(int x, int nstar = 0, int nlines = 1)
{
	if (nstar !=x)
	{
		cout << "*";
		return print(x, ++nstar, nlines);
	}
	else if (nlines!=x)
	{
		cout << endl;
		return print(x, nstar = 0, ++nlines);
	}
	{
		return 0;
	}
}
int main()
{
	int x;
	cout << "Enter the value for square: ";
	cin >> x;
	print(x);
	cout << endl;
	system("pause");
	return 0;
}