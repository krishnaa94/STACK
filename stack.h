#include <iostream> 
using namespace std;

//class define
class Node {
    public:
    int data ;
    Node *next;

    Node(int data);
};

class stack{
    private: 
        Node *head;
        int size;
    public:
        stack();
        ~stack();
        int getsize();    
        //insertion
        void push(int data);
        //displayfunction
        void displaystack();
        //deletion
        void pop();
        //findFunstion
        void finddata(int data); 
};

//------------------------------------------------------ member functions -------------------------------------

//------------------------------------------------------   constructors   -------------------------------------

Node::Node(int data)
{
    this->data = data;
    next = NULL;
}

stack::stack()
{
    head = NULL;
    size = 0;
    cout<<"stack initialised"<<endl;
}

//------------------------------------------------------   constructors   -------------------------------------
stack::~stack()
{
    Node *temp = head;
    while(temp)
    {
        temp=head->next;
        delete head;
        head=temp;
    }
    cout<<"stack deleted";
}

//------------------------------------------------------ get size function -------------------------------------
int stack::getsize()
{
    return size;
}

//------------------------------------------------------ insertion functions -------------------------------------

void stack::push(int data)
{
    Node *n = new Node(data);
    //if stack is empty
    if(head == NULL)
    {
        head = n;
    }
    else 
    {
        n->next = head;
        head = n; 
    }
    size++;
}

//------------------------------------------------------ display functions -------------------------------------

void stack::displaystack()
{
    Node *temp = head;
    if(!temp)
    cout<<"List is empty"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//------------------------------------------------------ delete data -------------------------------------

 void stack::pop()
 {
    //no stack
    if(head == NULL)
        cout<<"stack is empty --> not possible to delete";
    //stack exist
    else
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        size--;
    }
 }

//------------------------------------------------------   find function   -------------------------------------

void stack::finddata(int data)
{
    int pos = 1;
    bool found = false;
    Node *temp = head;
    while(temp)
    {   
        if(data == temp->data)
            {
                found = true;
                cout<<"data --> "<<data<<" is found at "<<pos<<"th postition of list"<<endl;
            }
        pos++;
        temp=temp->next;
    }

    if(!found)
        cout<<"DATA NOT FOUND"<<endl;
}
