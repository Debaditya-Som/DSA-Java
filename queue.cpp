#include<iostream>
using namespace std;
class Queue{
    private:
    static const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int front;
    int rear;

    
    public:
        Queue();
        void enqueue(int num);
        void del();
        void display();
};

Queue :: Queue()
{
    front = -1;
    rear = -1;
}

void Queue:: enqueue(int num)
{
    if (rear == MAX_SIZE - 1) {
        cout << "Queue Overflow" << endl;
    }
    else
    { 
    if (front == -1) {
            front = 0;
        }
    arr[++rear]= num;    
    }
}

void Queue:: del()
{
    if(front==-1)
    {
        cout <<"Queue Overfow";
    }
    else
    {
        int val = arr[front];
        cout<<"The element deleted:"<<val<<endl;
        if(front==rear)
        {
          front = rear = -1;
        }
        else {
            front++;
        }
    }
}
void Queue::display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    Queue q;

int ch,num;
   do{
    cout<<"Enter your choice"<<endl;
    
    cin>>ch;
    switch(ch){
        case 1:
                cout<<"Enter the num"<<endl;
                cin>>num;
                q.enqueue(num);
                break;
        case 2:
                q.del();
                break;
        case 3:
                q.display();                
    }
   }while(ch!=4);
    return 0;
}

    
