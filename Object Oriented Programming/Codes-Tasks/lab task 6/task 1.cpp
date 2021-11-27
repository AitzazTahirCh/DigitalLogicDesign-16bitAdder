#include<iostream>
#include<string>
using namespace std;

class counterType
{
private:
	int counter;
public:
	counterType() : counter(0)
	{
	};
	void setcounter(int x)
	{
		counter = x;
	}
	void inc()
	{
		counter++;
		if (counter < 0)
		{
			counter = counter * (-1);
		}
		cout << "counter after increment : " << counter;
	}
	void dec()
	{
		counter--;
		if (counter < 0)
		{
			counter = counter * (-1);
		}
		cout << "counter after increment : " << counter;
	}
};


int main()
{
	counterType c;
	int x;
	cout << "enter the value for constructor :";
	cin >> x;
	c.setcounter(x);
	cout << endl;
	c.inc();
	cout << endl;
	c.dec();
	cout << endl;
	system("pause");
	return 0;
}