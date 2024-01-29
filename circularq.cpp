#include<iostream>
using namespace std;

class CQueue {
private:
    static const int MAX_SIZE = 5;
    int arr[MAX_SIZE];
    int front, rear;

public:
    CQueue();
    void enqueue(int num);
    void del();
    void display();
};

CQueue::CQueue() {
    front = -1;
    rear = -1;
}

void CQueue::enqueue(int num) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1)) {
        cout << "Queue Overflow" << endl;
    }
    else {
        if (front == -1) {
            front = 0;
        }
        arr[rear] = num;
        rear = (rear + 1) % MAX_SIZE;
    }
}

void CQueue::del() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    }
    else {
        int val = arr[front];
        cout << "The element deleted: " << val << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX_SIZE;
        }
    }
}

void CQueue::display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Circular Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);

        cout << endl;
    }
}

int main() {
    CQueue cq;
    int choice, num;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to enqueue: ";
                cin >> num;
                cq.enqueue(num);
                break;
            case 2:
                cq.del();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
