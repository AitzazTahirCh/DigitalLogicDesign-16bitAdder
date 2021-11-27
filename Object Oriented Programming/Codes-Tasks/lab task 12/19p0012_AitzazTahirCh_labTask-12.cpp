#include<iostream>
using namespace std;

class Enemy
{
public:
	static int alive;  //static variable
	Enemy()  //constructor
	{
		alive++;
	}
	static int get()  //function to get no. of objects
	{
		cout<<"no. of alive Enemy objects:  ";
		return alive;
		cout<<endl;
	}
	static void del(Enemy *a)  //function to delete object
	{
		alive--;
		delete a;
		cout<<"-Object deleted succesfully-"<<endl;
		cout<<get()<<endl;
	}
	
};

int Enemy::alive=0;  //static variable intialized by zero

int main()
{
	cout<<"--Initially--"<<endl;
	cout<<Enemy::get()<<endl; //Initially

	Enemy *obj1, *obj2;
	obj1= new Enemy;
	obj2= new Enemy;
	cout<<"--After making 2 objects--"<<endl;
	cout<<Enemy::get()<<endl;

	cout<<"--after deletion of object 2--"<<endl;
	Enemy::del(obj2);

	system("pause");
	return 0;
}