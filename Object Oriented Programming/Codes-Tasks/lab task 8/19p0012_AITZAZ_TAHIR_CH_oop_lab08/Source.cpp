#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class addressType
{
public:
	string streetaddress;
	string city;
	string state;
	int zipcode;
	addressType(): zipcode(0)
	{
	}
	addressType(const addressType &obj)
	{
	this->streetaddress=obj.streetaddress;
	this->zipcode=obj.zipcode;
	this->city=obj.city;
	this->state=obj.state;
    }
	void setAddress(string a)
	{
		streetaddress=a;
	}
	void printAddress()
	{
		cout<<"Street address : "<<streetaddress<<endl;	
	}
	void setCity(string b)
	{
		city=b;
	}
	void printCity()
	{
		cout<<"City : "<<city<<endl;
	}
	void setState(string c)
	{
		state=c;
	}
	void printState()
	{
		cout<<"State : "<<state<<endl;
	}
	void setZipcode(int x)
	{
		zipcode=x;
	}
	void printZipcode()
	{
		cout<<"Zip code : "<<zipcode<<endl;
	}
	friend void displayAll(addressType a);
};
void displayAll(addressType a)
{
	cout<<"Records from address book : "<<endl;
	a.printAddress();
	a.printCity();
	a.printState();
	a.printZipcode();
}

class personType
{ 
private:
	string firstName;
	string lastName;
public:
personType()
{
	firstName=" ";
	lastName=" " ;
}
void print() const
{
	cout<<firstName<<"  "<<lastName<<endl;
}

void setName(string first,string last)
{
	firstName=first;
	lastName=last;
}
string getFirstName() const
{
	return firstName;
}
string getLastName() const
{
	return lastName;
}

};

class dateType
{
private:
	int dMonth;
	int dDay;
	int dYear;
public:
	void setDate(int month, int day, int year)
	{
		dMonth=month;
		dDay=day;
		dYear=year;
	}
	int getDay() const
	{
		return dDay;
	}
	int getMonth() const
	{
		return dMonth;
	}
	int getYear() const
	{
		return dYear;
	}
	void printDate() const
	{
		cout <<"Date of Birth : "<< dMonth << "-" << dDay << "-" << dYear<<endl; 
	}
	dateType() 
	{ 
		dMonth =0;
		dDay =0;
		dYear =0;
	} 
};

class extPersonType :public addressType, public personType, public dateType
{
	string nickName;
public:
	string person;
	int pnmbr;
	void setPerson(string x)
	{
		person=x;
	}
	void printPerson()
	{
		cout<<"Relation to person : "<<person<<endl;
	}
	void setPnmbr(int a)
	{
		pnmbr=a;
	}
	void printPnmbr()
	{
		cout<<"Phone number : "<<pnmbr<<endl;
	}
	extPersonType(): pnmbr(0)
	{
	}
	friend class myFriend;
};

class myFriend
{
private:
	string name;
	int age;
public:
	void set_nickName(extPersonType ex)
	{
		string xy;
		cout<<"Enter nickname : ";
		cin>>xy;
		ex.nickName=xy;
	}
	string get_nickName(extPersonType ex)
	{
		cout<<"Nickname : ";
		return ex.nickName;
	}
};

class AddressbookType: public extPersonType
{

};
int main()
{
	int size;
    ifstream infile("data.txt");

	cout << " Enter Size of the Address Book to Maintain (here data file is of 2 entries u can change by adding more data in file)  (Max 500 Entries) : ";
	cin>>size;
	string fname,lname,t,address,city,state;
	int d,m,y,zip,no;
	AddressbookType A[500];
	for (int i=0; i<size;i++)
	{
	infile>>fname;
	infile>>lname;
	infile>>d;
	infile>>m;
	infile>>y;
	infile>>t;
	infile>>address;
	infile>>city;
	infile>>state;
	infile>>zip;
	infile>>no;
	
	A[i].setPerson(t);
	A[i].setName(fname,lname);
	A[i].setDate(d,m,y);
	A[i].setAddress(address);
	A[i].setCity(city);
	A[i].setState(state);
	A[i].setZipcode(zip);
	A[i].setPnmbr(no);
	}

	string searchbylast;
	cout << " Enter the Last Name to search : ";
	cin>>searchbylast;
	cout <<endl;
	for (int i=0; i<size;i++)
	{
		if(A[i].getLastName()==searchbylast)
		{
			A[i].printAddress();
			A[i].printPnmbr();
			A[i].printDate();
		}
	}
	int mnth;
	cout<<"Enter month no. to check peoples birthday in that month : ";
	cin>>mnth;
	cout<<"Names of people : "<<endl;
	for (int i=0; i<size;i++)
	{
		if(A[i].getMonth()==mnth)
		{
			A[i].print();
			cout<<endl;
		}
	}
	string rltn;
	cout<<"Enter relation for whom u want to check the names : (family , friends , business) ";
	cin>>rltn;
	for (int i=0; i<size;i++)
	{
		if(rltn=="family")
		{
			A[i].print();
			cout<<endl;
		}
		else if(rltn=="friends")
		{
			A[i].print();
			cout<<endl;
		}
		if(rltn=="business")
		{
			A[i].print();
			cout<<endl;
		}
	}
	addressType objbyconstructor;
	addressType objbycopyconstructor(objbyconstructor); //copy constructor
	
	myFriend frndclass;
	cout<<endl<<"----set and get nickName by friend class----"<<endl; //friend class
	for (int i=0; i<size;i++)
	{
		cout<<endl<<" For "<<A[i].getFirstName()<<"  "<<A[i].getLastName()<<endl;
		frndclass.set_nickName(A[i]);
		cout<<frndclass.get_nickName(A[i]);
	    cout<<endl;
	}

	cout<<endl<<"----Output by displayAll friend funcion of class(addressType)----"<<endl;  //friend function
	for (int i=0; i<size;i++)
	{
		cout<<endl<<" For "<<A[i].getFirstName()<<"  "<<A[i].getLastName()<<endl;
	    displayAll(A[i]);
	    cout<<endl;	
	}
	infile.close();
	system("pause");
	return 0;
}