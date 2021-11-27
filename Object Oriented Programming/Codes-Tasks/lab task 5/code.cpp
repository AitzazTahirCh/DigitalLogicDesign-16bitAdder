#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct sys
{
	string nameofitem;
	int quantity;
	double tax;
	int wtime;
	double charges;
	string ing;
};

void getData(sys res[8])
{

	ifstream infile;
	string nameofitem;
	int quantity;
	double tax;
	int wtime;
	double charges;
	string ing;
	infile.open("menu.txt");

	int i = 0;
	while (!infile.eof())
	{
		infile >> res[i].nameofitem >> res[i].quantity >> res[i].tax >> res[i].wtime >> res[i].charges >> res[i].ing;
		i++;
	}
}

void showMenu(sys res[8])
{
	cout <<" Name of item "<< " " <<" Quantity "<< " " <<" Tax "<< " " <<" Waitingtime "<< " " <<" Charges/Price "<< " " <<" Ingredients "<< endl;
	for (int i = 0; i < 8; i++)
	{
		cout << res[i].nameofitem << " " << res[i].quantity << " " << res[i].tax << " " << res[i].wtime << " " << res[i].charges << " " << res[i].ing << endl;
	}
}

void printCheck(sys res[8])
{
	char n, y, c = 'y';
	string item;
	double quantity = 0, x = 0, tot = 0, tottax = 0;
	while (c != 'n')
	{
		cout << "what would u like to take for breakfast? " << endl;
		cout << "enter name of item : ";
		cin >> item;
		cout << "enter no. of quantity :";
		cin >> quantity;
		cout << " Name of item " << " " << " Quantity " << " " << " Charges/Price " << " " << " Ingredients " << endl;
		for (int i = 0; i < 8; i++)
		{
			if (item == res[i].nameofitem)
			{
				cout << res[i].nameofitem << " " << quantity << " " << res[i].charges << " " << res[i].ing << endl;
				x = (res[i].charges) * (quantity) * (res[i].tax);
			}
			tottax = tottax + res[i].tax;
			tot = tot + x;

		}
		cout << "do u want to order something else? (y/n) ";
		cin >> c;
	}
	cout << "Total Tax :" << tottax << endl;
	cout << "Total Bill :" << tot << endl;
}
int main()
{
	
	sys res[8];
	getData(res);
	showMenu(res);
	printCheck(res);
	
	system("pause");
	return 0;

}