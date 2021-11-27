#include<iostream>
using namespace std;
class listType{
private:
	int size;
	int *arr;
public:
	listType(); 
	~listType();
	bool isEmptyList(); //checks whether list is empty or not
	bool isFullList();// checks if list is completely filled.
	int search(int searchItem) ; //search for a number in the list
	void insert(int newElement);// function which inserts a new item in the list
	void remove(int removeElement);// function to remove a number from the list
	void printList();// prints all the numbers in the list
	
};
listType::listType(){
	size=10;
	 arr=new int[size];
	 for (int i=0;i<size;i++){
	 	cout<<"Enter element "<<i+1<<" of array: ";
	 	cin>>arr[i];
	 }
}
listType::~listType(){
	delete[] arr;

}
void listType::printList(){
 	cout<<"Elements of array are: ";
 	for (int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 }
 bool listType::isEmptyList(){
  	if (arr[size]!=0)
  		return 1;
  	else 
  		return 0;
  }
   bool listType::isFullList(){

   		if(sizeof(arr)==size)
   			return 1;
   		else 
   			return 0;
   }
int listType::search(int Item) {
	int c;
	for (int i=0;i<size;i++)
	{
		if(Item==arr[i])
			c=1;
		else 
			c=0;
	}
	return c;
}
 void listType::insert(int newElement){
 	int position;
  cout<<"Enter the position at which you want to insert an element:";
  cin>>position;
  arr[position]=newElement;
 }
 void listType::remove(int removeElement){
 	for (int i=0;i<size;i++){
 		if(arr[i]==removeElement){
 			for(int j=i; j<(size-1);j++){
 				arr[j]==arr[j+1];}
 				break;

 		}
 	}
 }

int main()
{
int element,R_element;
int a;
listType l;
l.printList();
cout<<"Enter the number you want ot search"<<endl;
cin>>a;
cout<<l.search(a);
cout<<l.isEmptyList();
cout<<l.isFullList();
cout<<"Enter the element you want to insert"<<endl;
cin>>element;
l.insert(element);
l.remove(R_element);
return 0;
}
