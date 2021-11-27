#include <iostream>
using namespace std;
int sum (int *array)
{
	int tot = 0;
	for (int i = 0; i < 4; i++)
	{
		tot = tot + *(array + i);
	}
	return tot;
}
int FUN(int* array, int (*sum)(int*))
{
	return (*sum)(array);
}
int main()
{

	
	int array[4] , result;
	cout << " ENTER VALUES IN ARRAY :";
	for (int i = 0; i < 4; i++)
	{
		cin >> array[i];
	}
	int* pointer;
	pointer = &result;
	*pointer = FUN(array, sum);
	cout << *pointer << endl;
	system("pause");
	return 0;
}