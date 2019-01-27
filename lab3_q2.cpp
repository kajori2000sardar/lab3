//include library
#include <iostream>

using namespace std;

//creating class for node
class Node
{
	public:
	  //declaring variable 
	  int data;
	  //pointer to the next node
	  Node * next;
	  //constructor that makes the pointer to NULL
	  Node(int value)
	  {
		next = NULL;
		data = value;
	  }
};

//creating class for circular linked list
class CLL
{
	public:
	  //creating constructor
	  Node * head;
	  CLL()
	  {
		head = NULL;
	  }

	  //inserts to the end of the linked list
	  void insert(int value)
	  {
		//create a new node
		Node * temp = new Node(value);
		//check if list is empty
		if(head == NULL)
		{
			head = temp;
		}  
		else
		{
			//if list is empty 
			Node * current = head;
			while(current->next != head)
        	        current = current->next;
			current->next = temp;
		}
			temp->next = head;
	  }

	  //displaying the linked list
	  void display()
	  {
		Node * current = head;
		if(current == NULL) 
	  	{
			cout << "No elements " << endl;
			return;
		}
		while(current->next != head)
		{ 
			//stopping at head
			cout << current -> data << "->";
			current = current -> next;
		}
		//printing the last element
		cout << current -> data ;
		cout << endl;
	  }

	  void InsertAt(int value, int pos)
	  {
		//reach the place before the position
		Node * current = head;
		int i=1;
		while(i<pos)
		{
			i++;
			current = current ->next;
		}
		//create a node
		Node * temp = new Node;
		temp - > data = value;

		//moving pointer
		temp ->next = current ->next;
		current -> next = temp;


	  }

	  void DeleteAt(int pos)
	  {
		//reach the place before the position
		Node * current = head;
		int i=1;
		while(i<pos)
		{
			i++;
			current = current ->next;
		}
        	//store the tail in temp
        	Node * temp = tail;
        	//before tail has to point to null
        	Node * current = head;
        	while(current->next != tail)
		{
        		    current = current->next;
        	}
        	current->next = NULL; 

        	//update tail
        	tail = current;
        	//delete temp
        	delete temp;
	  }

	  void Delete()
	  {
		//deletion of last element
        	//store the tail in temp
        	Node * temp = tail;
        	//before tail has to point to null
        	Node * current = head;
        	while(current->next != tail)
		{
			current = current->next;
        	}
        	current->next = NULL; 

        	//update tail
        	tail = current;
        	//delete temp
        	delete temp;
	  }

	  void CountItems()
	  {
		Node * current = head;
		//condition to check the no. of elements in linked list
		int i=1;
		while(current -> next!=NULL)
		{
			i++;
		}
		//returns the no. of elements in linked list
		return i-1;
	  }
};

int main()
{
	  CLL cll1;
	  for(int i= 1; i < 11; i++)
	  {
		cll1.insert(i);
	  }
	  //cll1.insert(1);
	  cll1.display();
}

