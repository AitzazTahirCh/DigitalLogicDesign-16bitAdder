#include<iostream>
#include<string>
using namespace std;
class Worker
{
private:
	char workerName;
	char *ptr;
	string SSN;
public:
	Worker(): SSN("")
	{
		ptr=&workerName;
		ptr= new char(0);
	}
	Worker(string x): SSN(x)
	{
		ptr=&workerName;
		ptr= new char[SSN.length()+1];
	}
	~Worker (){
		delete [] ptr;
	}
	void setWorkerName()
	{
		cout<<"Enter worker's name : "<<endl;
		if(workerName!=0)
		{
			cin>>ptr;
		}
	}
	void setSSN()
	{
		cout<<"Enter Social Security Number in xxx-xx-xxxx format : ";
		cin>>SSN;
	}
	void getWorkerName()
	{
			cout<<ptr;
	}
	string getSSN()
	{
		return SSN;
	}
	virtual void printValues()
	{
		cout<<"Worker Name: ";
		getWorkerName();
		cout<<"Social Security Number: "<<getSSN();
	}
};
class PayWorker: public Worker
{
private:
	int dependents;
	double payRate;
public:
	PayWorker(string x): Worker(x)
	{
	}
	void  setPayRate()
	{
		cout<<"Enter worker's Pay Rate : ";
		cin>>payRate;
	}
	void setDependents()
	{
		cout<<"Enter worker's dependents : ";
		cin>>dependents;
	}
	double getPayRate()
	{
		return payRate;
	}
	int getDependents()
	{
		
		return dependents;
	}
	void printValues()
	{
		cout<<"In base class Worker workerName is : ";
		getWorkerName();
		cout<<"In base class Worker SSN is : "<<getSSN()<<endl;
		cout<<"In derived class PayWorker payRate is : "<<getPayRate()<<endl;
		cout<<"In derived class PayWorker dependents is : "<<getDependents()<<endl;
		cout<<"Worker Name: ";
		getWorkerName();
		cout<<"Social Security Number: "<<getSSN()<<endl;
		cout<<"Pay Rate: $"<<getPayRate()<<endl;
		cout<<"Number of Dependents: "<<getDependents()<<endl;
	}
};
int main()
{
	string a="xxx-xx-xxxx";
	PayWorker obj(a);
	obj.setWorkerName();
	obj.setSSN();
	obj.setPayRate();
	obj.setDependents();
	obj.printValues();
	system("pause");
	return 0;
}