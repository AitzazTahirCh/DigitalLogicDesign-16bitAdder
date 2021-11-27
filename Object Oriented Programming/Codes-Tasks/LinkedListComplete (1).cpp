#include <iostream> 
using namespace std; 

struct node
{
	int data;
	node* next;
	
};

class LinkedList
{
	
	private:
    node *head;
    node *tail;
    
public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void createNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {   
            tail->next = temp;
            tail = temp;
        }
    }

    void printList() {
        node * current = head;

        while (current != NULL) {
            cout << current->data <<endl;
            current = current->next;
        }
    }
    
    //inserting new Node at the head
    void pushNode(int value) {
    node * new_node;
    new_node = new node;

    new_node->data = value;
    new_node->next = head;

    head = new_node;
}
    
// Inserting Node at a particular location    
void insertNodeAtPosition(int pos, int value)
{
      node *pre = new node;
      node *post = new node;
      node *temp = new node;
      post = head;

      for(int i = 1; i < pos; i++)
      {
          pre = post;
          post = post->next;
      }
      temp->data = value;
      pre->next = temp; 
      temp->next = post;
}


//Deleting first item of the list
int pop() {
    int retval = 0;
    node * next_node = NULL;

    next_node = head->next;
    retval = head->data;
    delete head;
    head = next_node;

    return retval;
}    

//deleting last item
int removeLast() {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        retval = head->data;
        delete head;
        return retval;
    }

    /* get to the second to last node in the list */
    node * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the second to last item of the list, so let's remove current->next */
    retval = current->next->data;
    delete current->next;
    current->next = NULL;
    return retval;
}


//removing at a specific Position
int removeByIndex(int n) {
    int i = 0;
    int retval = -1;
    node * current = head;
    node * temp_node = NULL;

    if (n == 0) {
    	cout<<"Head Element"<<endl;
        return 0;
    }

    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->data;
    current->next = temp_node->next;
    delete temp_node;

    return retval;

}




};



int main() 
{ 
   LinkedList L;
   cout<<endl;
   L.createNode(34);
   L.createNode(39);
   L.printList();
    cout<<endl;
    
   L.pushNode(41);
   L.createNode(60);

   L.pushNode(42);
   L.printList();   // 42 41(pre) 70 34(post) 39 60 
 cout<<endl;
   L.insertNodeAtPosition(3,70);
//   
   L.printList();
//   
   cout<<endl;
  cout<<"popped value="<<L.pop()<<endl;
   cout<<endl;
   L.printList(); 
//  
//   cout<<endl;
//   cout<<"Remove last="<<L.removeLast()<<endl;
//   cout<<endl;
//   L.printList(); 
   
   
//    cout<<endl;
//   cout<<"Remove At a position="<<L.removeByIndex(2)<<endl;
//   cout<<endl;
 //  L.printList(); 
  
    return 0; 
}  


