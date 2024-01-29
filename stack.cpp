#include<iostream>
using namespace std;
class Stack
{
    private:
    int sp;
    int arr[10];

    public:
    Stack();
    void push(int num);
    void pop();
    void display();
};

Stack :: Stack ()
{
    sp = 0;
}

void Stack :: push(int num)
{
    if (sp==10)
    {
        cout<<"Stack Overflows"<<endl;
    }
    else
    {
        arr[sp]= num;
        sp++;
    }
} 
void Stack :: pop()
{
    if (sp == 0)
    {
        cout<<"Stack Underflows"<<endl;
    }
    else
    {
        int val = arr[--sp];
        cout<<"The value popped:"<<val<<endl;
        

    }
    
}

void Stack :: display()
{
    for(int i =0;i<sp;i++)
    {
        cout << arr[i]<<endl;
    }
}

int main()
{
   Stack s;
   int ch,num;
   do{
    cout<<"Enter your choice"<<endl;
    
    cin>>ch;
    switch(ch){
        case 1:
                cout<<"Enter the num"<<endl;
                cin>>num;
                s.push(num);
                break;
        case 2:
                s.pop();
                break;
        case 3:
                s.display();                
    }
   }while(ch!=4);
    return 0;
}

    