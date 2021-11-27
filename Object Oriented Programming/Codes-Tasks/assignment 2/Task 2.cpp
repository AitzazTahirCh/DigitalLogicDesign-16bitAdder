#include<iostream>
#include<string>
using namespace std;
class wheel
{
private:
	string  w;
public:
	void set_wheel_state(string s)
	{
		w=s;
	}
	string get_wheel_state()
	{
		return w;
	}
};
class car: public wheel
{
private:
	string w[4];
public:
	void set_car_to_moving()
	{
		for(int i=0;i<4;i++)
		{
			w[i]="Turning";
		}
	}
	void set_car_to_stopped()
	{
		for(int i=0;i<4;i++)
		{
			w[i]="Stopped";
		}
	}
	void print_car_wheels_state()
	{
		cout<<"Car state:- "<<endl;
		for(int i=0;i<4;i++)
		{
			cout<<"Wheel "<<i<<" is "<<w[i]<<endl;
		}
	}
};

int main()
{
	car a;
	string x;
	cout<<"Enter wheel state : (moving/stopped)"<<endl;
	cin>>x;
	a.set_wheel_state(x);
	cout<<"Wheel state : "<<a.get_wheel_state()<<endl;
	if(a.get_wheel_state()=="moving")
	{
		a.set_car_to_moving();
		a.print_car_wheels_state();
	}
	else if(a.get_wheel_state()=="stopped")
	{
		a.set_car_to_stopped();
		a.print_car_wheels_state();
	}

	system("pause");
	return 0;
}
