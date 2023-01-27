#include<iostream>
using namespace std;
#define size 50
int queue[size];
int front = -1;
int rear = -1;
int isFull(){
    if((front==(rear+1)%size)||(front==0 &&rear==size-1)){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(front==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int &val){
    if(isFull()){
        cout<<"queue full"<<endl;
    }
    else if(rear==size-1 && front!=0){
        rear = 0;
        queue[rear]=val;
    }
    else if(front==-1){
        front=rear=0;
        queue[rear]=val;
    }
    else{
        queue[++rear]=val;
    }
    
}

int dequeue(){
    if(isEmpty()){
        cout<<"queue empty"<<endl;
    }
    int temp=queue[front];
    queue[front]=-1;
    if(rear==front){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else {
        front++;
        
    }
    return temp;
}

void display(){
    if(rear>=front){
        for(int i=front;i<=rear; i++){
            cout<<queue[i]<<" ";
        }
    }
        else{
            for(int i=front;i<size;i++)
                cout<<queue[i]<<" ";
             for(int i=0;i<=rear; i++)
                cout<<queue[i]<<" ";
            }
        }
    
int main(){
    cout<<"enter the elements of queue"<<endl;
    int val;
    cin>>val;
    enqueue(val);
    cin>>val;
    enqueue(val);
    cin>>val;
    enqueue(val);
    cin>>val ;
    enqueue(val);
    int x = dequeue();
    cout<<"deleted element is : "<<x<<endl;
    cout<<"queue is : "<<endl;
    display();
    
    
    
}






