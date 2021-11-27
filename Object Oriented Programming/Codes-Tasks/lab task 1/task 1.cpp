#include <iostream>
using namespace std;

void sum(int* a, int* b, int* c)
{
	*c = *a + *b;
}
int main()
{
	int x = 0, y = 0, z = 0;
	cout << "enter the first value :" << endl;
	cin >> x;
	cout << "enter the second value :" << endl;
	cin >> y;
	sum(&x, &y, &z);
	cout << "sum = " << z<<endl;
	system("pause");
	return 0;}