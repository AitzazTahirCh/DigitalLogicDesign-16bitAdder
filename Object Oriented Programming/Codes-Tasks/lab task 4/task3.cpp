#include<iostream>
#include<string>
using namespace std;
int main() 
{

	int N = 2;
	int M = 3;

	string** ary = new string* [N];
	
	for (int i = 0; i < N; ++i)
	{
		ary[i] = new string[M];
	}

	for (int i = 0; i < N; ++i)
	{
		cout << "enter name :";
		cin >> ary[i][0];
		cout << "enter father name :";
		cin >> ary[i][1];
		cout << "enter city name :";
		cin >> ary[i][2];
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cout << ary[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < N; ++i)
	{
		delete[] ary[i];
		delete[] ary;
	}

	system("pause");
	return 0;
}