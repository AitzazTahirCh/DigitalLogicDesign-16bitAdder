#include<iostream>
#include<string>
using namespace std;

class team                                   //class ids defined
{
	public:                                  //class is declared public so we can change it
	string fname; 
	string lname;
	int goals;
	int age;
	int ranking;
	void newpalyer();
	void updatepalyer();
	void searchplayer();
	void diplay();
	void exit();
};

void newpalyer(team *ptr)                                    //function to add new players
{
	int i=0;
	cout<<"enter the player u want to enter i.e(1-11)"<<endl;
	cin>>i;
	ptr=(ptr+i)-1;

	cout<<"enter first name:";
	cin>>ptr->fname;
	cout<<"enter last name:";
	cin>>ptr->lname;
	cout<<"enter no. of goals:";
	cin>>ptr->goals;
	cout<<"enter age of palyer:";
	cin>>ptr->age;
	cout<<"enter player's ranking:";
	cin>>ptr->ranking;
}

void updatepalyer(team *ptr)                                //function to update player info
{
	int i=0 , x;
	cout<<"enter the index of player who u want to update:";
	cin>>i;
	cout<<"what u want to update? i.e 1 for first name, 2 for last name, 3 for no. of goals, 4 for age of player, 5 for player's ranking ";
	cin>>x;
	if(x==1)
	{
		cout<<"enter the first name :";
		cin>>ptr->fname;
	}
	if(x==2)
	{
		cout<<"enter the last name :";
		cin>>ptr->lname;
	}
	if(x==3)
	{
		cout<<"enter the no. of goals :";
		cin>>ptr->goals;
	}
	if(x==4)
	{
		cout<<"enter player's age :";
		cin>>ptr->age;
	}
	if(x==5)
	{
		cout<<"enter player's ranking :";
		cin>>ptr->ranking;
	}
}

void searchplayer(team *ptr)                    //function to seacrh any player
{
	int a=0;
	cout<<"enter the index of player :";
	cin>>a;
	ptr=(ptr+a)-1;
	cout<<"first name :"<<ptr->fname<<endl;
	cout<<"last name :"<<ptr->lname<<endl;
	cout<<"no. of goals :"<<ptr->goals<<endl;
	cout<<"age :"<<ptr->age<<endl;
	cout<<"player's ranking"<<ptr->ranking;
}
void diplay(team *ptr)
{                                               //function to display all members
	for(int i=0; i<11; i++)
	{
		ptr=ptr+i;
		cout<<endl;
		cout<<"first name :"<<ptr->fname<<endl;
	    cout<<"last name :"<<ptr->lname<<endl;
	    cout<<"no. of goals :"<<ptr->goals<<endl;
	    cout<<"age :"<<ptr->age<<endl;
	    cout<<"player's ranking"<<ptr->ranking;
	}
}
void exit()                                    //function to exit the program
{
  cout<<"do u want to exit the program? (y/n) "<<endl;
  
}
int main()
{
	team t[11];
	int x;
	char y ,n ,c='x';

	while(c!='y')   //loop will coninue until user wants to exit.
	{
		cout<<"1.Add new player   2.Update a  Player record   3.Search Player   4.Display complete list of players   5.Exit the program "<<endl;
		cin>>x;  //user is electing a choice from the menu displayed.
		if(x==1)
		{
			newpalyer(t);
		}
		else if(x==2)
		{
			updatepalyer(t);
		}
		else if(x==3)
		{
			searchplayer(t);
		}
		else if(x==4)
		{
			diplay(t);
		}
		else if(x==5)
		{
			exit();
			cin>>c;
		}
		else
		{
			cout<<"///EROR/// u pressed the wrong key "<<endl;
		}

	}
	system("pause");
	return 0;
}