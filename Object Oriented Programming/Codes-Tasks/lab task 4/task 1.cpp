#include<iostream>
using namespace std;
int* getMem(int* p, int size)
{
	p = new int[size];
	return p;
}
void init(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "enter the no. of value : ";
		cin >> *(p + i);
	}
}
void print(int *p, int size)
{     
	for (int i = 0; i < size; i++)
	{	
		cout<< *(p + i)<<endl;
	}
}
void freeMem(int* p)
{
	delete[] p;
}
int main()
{
	int* a = NULL;
	int size;
	cout << "enter the size of an array " << endl;
	cin >> size;
	a = getMem(a, size);
	init(a, size);
	print(a, size);
	freeMem(a);
	system("pause");
	return 0;
}