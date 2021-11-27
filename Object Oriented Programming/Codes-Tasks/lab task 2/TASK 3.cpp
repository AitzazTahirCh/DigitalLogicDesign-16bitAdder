#include<iostream>
#include<string>

using namespace std;
int main()
{
	int x[5], y[5];
	int* ptr1 = x;
	int* ptr2 = y;
	cout << "enter 5 inputs fotr first array :";
	for (int i = 0; i < 5; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}
	cout << "second array after duplication from first array is :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << y[i]<<endl;
	}
    system("pause");
	return 0;
}