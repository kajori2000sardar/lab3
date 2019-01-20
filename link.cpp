void revDisplay()
{
	revDisplay2(head);
	cout<<endl;
}

void revDisplay2(Node+current)
{
	//moves to next (till available)
	if(current == NULL)
		return;
	else
	{
		revDisplay2();
		cout<<current->data<<"->';
	}
	//while coming ack you print
}

void revLL()
{
	revLL(head);
}

void erevLL2(Node+current)
{
	//condition for empty LL
	if(current==NULL)
		return;
	//condition for 1 element
	else
		if(current->next==NULL)
		{
			head=current;
			return;
		)
	//reverse for rest
	else
	{
	
	}
}

void insert(int value)
{
	//if 1st Node is added
	Node + temp=new Node;
	//insert value inthe node
	temp->data=value;
	//1st Node only
	Node**curr=&head;
	//head will be given by *curr
	while((*curr)!=NULL)
	{
		











class Node
{
	int data;
	Node *next;
	Node *prev;
}
Node**temp=&head;
