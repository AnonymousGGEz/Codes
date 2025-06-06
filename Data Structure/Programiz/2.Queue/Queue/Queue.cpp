#include <iostream>
#define SIZE 5

using namespace std;

class Queue{
    private:
    int items[SIZE], front, rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }

    bool isFull(){
        if(rear == SIZE -1){
        return true;
        }
        return false;
    }
    
    bool isEmpty(){
        if(front == -1)
        return true;
        else
        return false;
    }

    void enQueue(int element){
        if(isFull()){
            cout << "QUEUE is Full";
        }else{
            if(front == - 1) front =0;
            rear++;
            items[rear] = element;
            cout << endl 
                    <<"INSERTED" << element << endl;
        }
    }

    int deQueue(){
        int element;
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return(-1);
        }else{
            element = items[front];
            if(front >= rear) {
                front = -1;
                rear = -1;
            }else{
                front++;
            }
            cout << endl
                << "Deleted ->" << element << endl;
             return(element);
        }
    }

    void display(){
        int i;
        if(isEmpty()){
            cout << "The Queue is Empty" << endl; 
        }else{
            cout << endl
                    << "Front index ->" << front;
            cout << endl
                <<"Items ->";
            for(i = front; i <= rear; i++)
                cout << endl
                    <<"Rear Index ->" << rear << endl;
        }
    }
};

int main(){

    Queue q;

    q.deQueue();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

}