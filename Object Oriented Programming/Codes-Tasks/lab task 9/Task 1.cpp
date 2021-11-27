#include<iostream> 
using namespace std;
class clockType
{
    int hour,min,sec;
public:
    clockType(int h,int m,int s)
	{
    hour=h;
    min=m;
    sec=s;
    }
    clockType(const clockType &obj)   //copy constructor
	{
	cout<<"copy constructor is called"<<endl;
    this->hour=obj.hour;
    this->min=obj.min;
    this->sec=obj.sec;
    }
    void printTime()
	{
     cout<<hour<<" : "<<min<<" : "<<sec<<endl;
    }
    void operator = (const clockType &obj )
	{
    cout<<" = operator is called "<<endl;
    hour=obj.hour;
    min=obj.min;
    sec=obj.sec;
    }
    bool operator ==(const clockType &obj)
	{
    if(hour==obj.hour && min==obj.min && sec==obj.sec)
        return true;
    else
        return false;
    }
    friend ostream& operator<<(ostream& print, const clockType& obj)
	{
    print<< obj.hour<<" : "<<obj.min<<" : "<<obj.sec;
    return print ;
    } 
};
int main(){
    clockType clock1(01,30,40),clock2(02,40,5);
    cout<<"Time of clock1: ";
    clock1.printTime();
    cout<<"Time of clock2: ";
    clock2.printTime();
    cout<<endl;
    //call for copy constructor
    clockType clock3=clock2;
    cout<<"Copying value of clock2 to clock3: ";
    clock3.printTime();
    cout<<endl;
    //assigning value of clock2 to clock1
    clock1=clock2;
    cout<<"Time of clock1 after assigning time of clock2 to it :  ";
    clock1.printTime();
    cout<<endl;
    //printing of objects
    cout<<"Printing value of object number one(clock1): "<<clock1<<endl;
    cout<<"Printing value of object number two(clock2): "<<clock2<<endl;
    cout<<endl;
    //comparison of objects
    if(clock1==clock2){
        cout<<"The time of clock1 and clock2 is equal."<<endl;
    }
    else{
        cout<<"The time of clock 1 and clock 2 is not equal."<<endl;
    }
	system("pause");
    return 0;
    }