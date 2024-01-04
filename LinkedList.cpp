// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class LinkedList
{
    private:
        struct Node
        {
            int data;
            Node *link;
        }*p;
    public :
        LinkedList();
        void append(int num);
        void addatbeg(int num);
        void addafter(int loc, int num);
        void display ();
        int count();
        //void del(int num);
        ~LinkedList();
};

//initializes data memeber
LinkedList :: LinkedList()
{
    p = NULL;
}
// adds a node at the end
void LinkedList :: append (int num)
{
    Node *temp, *r;
    
    //if the list is empty, create first node
    if (p == NULL)
    {
        temp = new Node;
        temp -> data = num;
        temp -> link = NULL;
       p = temp;
    }
    else
    {   //go to last node
        temp = p;
        while(temp -> link!=NULL)
            temp = temp->link;
        //add node at the end
        r = new Node;
        r -> data = num;
        r -> link = NULL;
        temp -> link = r;
    }
}

//adds a new node at the beginning of the Linked List
void LinkedList :: addatbeg(int num)
{
    Node *temp;
    //add a new node
    temp = new Node;
    temp -> data = num;
    temp -> link = p;
    p = temp;
}

void LinkedList :: addafter (int loc, int num)
{
    Node *temp, *r;
    temp = p;
    for (int i = 0;i<loc;i++)
    {
        temp = temp ->link;
        
        if(temp == NULL)
        {
            cout<<"There are less than "<< loc<< "elements" <<endl;
            return;
        }
    }
    //insert new node
    r = new Node;
    r -> data = num;
    r ->link = temp ->link;
    temp -> link = r;
}
void LinkedList :: display()
{
    Node *temp = p;
    cout<<endl;
    //traverse the entire linkedlist
    while (temp!= NULL)
    {
        cout<< temp ->data<< " ";
        temp = temp ->link;
    }
}

int LinkedList ::  count()
{
    Node *temp = p;
    int c =0;
    
    while(temp!=NULL)
    {
        temp = temp -> link;
        c++;
    }
    return c;
}

LinkedList:: ~LinkedList()
{
    Node *q;
    
    while (p!=NULL)
    {
        q = p->link;
        delete p;
        p = q;
    }
}
    
int main()
{
    LinkedList L;
    L.append(100);
    L.append(10);
    L.addatbeg(20);
    L.addatbeg(30);
    L.addatbeg(10);
    
    L.display();
    L.addafter(1,1);
    L.display();
    
    cout<< L.count()<<endl;
    
    return 0;
}
