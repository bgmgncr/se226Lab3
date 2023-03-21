#include <iostream>
#include <rpcndr.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class Queue{
private:
    Node* front;
    Node* end;
    int size;
public:
    Queue(){
        front = NULL;
        end = NULL;
        size = 0;
    }
void enqueue(int a){
        Node* temp = new Node;
        temp->data =a;
        temp->next =NULL;
        if(front == NULL){
            front = end = temp;
        }
        else{
            end->next = temp;
            end = temp;
        }
        size++;
    }
void dequeue(){
        if(front==NULL){
            return;
        }
        Node* temp =front;
        front =front->next;
        delete temp;
        size--;
    }
    int top(){
        if (front== NULL){
            return -1;
        }
        return front->data;
    }
    boolean isEmpty(){
        return front == NULL;
    }
    int sizeQ(){
        return size;
    }


};

int main() {
Queue b;
b.enqueue(1);
b.enqueue(2);
b.enqueue(3);
b.enqueue(4);
b.enqueue(5);
b.enqueue(6);
b.enqueue(7);
b.enqueue(8);
b.enqueue(9);
b.enqueue(10);
cout<< "size of the queue:" + b.sizeQ()<<endl;
cout<< "make a dequeue and display it."<<endl;
b.dequeue();
cout<<"show the front of the queue."<< endl;
cout<<b.top()<< endl;

if(b.isEmpty())
    cout<<"queue is empty";
else
    cout<<"queue is full";
return 0;

}
