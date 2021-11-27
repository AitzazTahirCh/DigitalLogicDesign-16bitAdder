#include<iostream>
#include<string>
using namespace std;

int tot;
void sum(int test)
{
   if (test < 2)
   return;
   else
   {
	tot=tot+test;
    sum(test-1);
    return;
   }
}

void ans(int test)
{
	sum(test);
	cout<<"ans is : "<<tot*2<<endl;
}
int main()
{
    int test = 100;
	ans(test);
	system("pause");
	return 0;
}