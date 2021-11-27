#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct centre
{
	double x, y;
};
class circleType
{
public:
	void setRadius(double r);
	//Function to set the radius.
	//Postcondition: if (r >= 0) radius = r;
	//otherwise radius = 0;
	double getRadius();
	//Function to return the radius.
	//Postcondition: The value of radius is returned.
	double area();
	//Function to return the area of a circle.
	//Postcondition: Area is calculated and returned.
	double circumference();
	//Function to return the circumference of a circle.
	//Postcondition: Circumference is calculated and returned.
	circleType(double r = 0);
	//Constructor with a default parameter.
	//Radius is set according to the parameter.
	//The default value of the radius is 0.0;
	//Postcondition: radius = r;
	void print()
	{
		cout<< "radius : " << getRadius();
		cout<< "area : " << area();
		cout<< "cirumferenceis : " << circumference();
	}
	void setcen(double x,double y)
	{
		cen.x = x;
		cen.y = y;
	}
	void getcen()
	{
		cout << "centre points of circle are : " << "(" << cen.x << "," << cen.y << ")" << endl;
	}
private:
	double radius;
	centre cen;
};


void circleType::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		radius = 0;
}
double circleType::getRadius()
{
	return radius;
}
double circleType::area()
{
	return 3.1416 * radius * radius;
}
double circleType::circumference()
{
	return 2 * 3.1416 * radius;
}
circleType::circleType(double r)
{
	setRadius(r);
}

class cylinderType : public circleType
{
public:
	double height;
	void setHeight(double h)
	{
		height = h;
	}
	double volume()
	{
		return 3.1416 * pow(getRadius(), 2) * height;
	}
	double volumeinl()
	{
		return (528.32)*volume();
	}
	void printvolume()
	{
		cout << "volume of cylinder : ";
		cout<<volume();
	}
	double surfacearea()
	{
		return (2 * 3.1416 * getRadius() * height) + (2 * 3.1416 * pow(getRadius(), 2));
	}
	void psurfacearea()
	{
		cout << "surface area of cylinder :";
		cout<<surfacearea();
	}
	double tscost(double a)
	{
		return a*volumeinl();
	}
	double tpcost(double b)
	{
		return b*volume();
	}
};

int main()
{
	double x = 0, y = 0 , costpl=0 , paintcostpsqf=0 ;
	cylinderType c;
	double h=0 , r=0;
	cout << "Input the dimensions " << endl;
	cout << " enter height of cylinder in feet : ";
	cin >> h;
	c.setHeight(h);
	cout << "enter radius in feet : ";
	cin >> r;
	c.setRadius(r);
	cout<<"volume in feet :"<<c.volume()<<endl;;
	cout<<"volume in liters :"<<c.volumeinl()<<endl;
	cout << "enter the shipping cost per liter :";
	cin >> costpl;
	cout << "input paint cost per square foot :";
	cin >> paintcostpsqf;
	cout<<"total shipping cost : "<<c.tscost(costpl)<<endl;
	cout<<"total paint cost : "<<c.tpcost(paintcostpsqf)<<endl;
	cout << endl;
	system("pause");
	return 0;
}