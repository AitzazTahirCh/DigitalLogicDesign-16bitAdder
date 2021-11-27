#include <iostream>
using namespace std;

void  input(char *array)
{
	for (int i = 0; i <=4; i++)
	{
		cout << "input the values of array :";
		cin >> *array;
		array++;
	}
}

void print(char* array)
{
	array = array + 4;

	for (int i = 0; i<=4; i++)
	{
		cout << *array << endl;
		array--;
	}

}
int main()
{
	char array[5];
	input(array);
	print(array);
	system("pause");
	return 0;}