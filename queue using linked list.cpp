#include<iostream>
using namespace std;
class node{
	public :
		int data;
		node* next;
	
	node(int val){
		data = val;
		next = NULL;
	}
};
class queue{
	node* front;
	node* rear;
	public :
		queue(){
			front = NULL;
			rear = NULL;
		}

    void push (int val){
	    node* n = new node(val);
	    if(front==NULL){
		    rear = n;
		    front = n;
		    return;
	    }
	    rear->next = n;
    	rear = n; 
    }
    void pop(){
	    if(front==NULL){
    		cout<<"queue is underflow"<<endl;
    		return ;
	    }
    	node* todelete = front;
    	int temp = front->data;
    	front= front->next;
    	if(front == NULL)
    	    rear = NULL;
    	cout<<"deleted data is : "<<temp<<endl ;
    	delete todelete;
    }
    void display(){
        node* temp = front;
        if(front==NULL&&rear==NULL){
            cout<<"no elements in queue"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }

    int peek(){
	    if(front==NULL){
	    	cout<<"no elements in the array"<<endl;
	       	return -1;
	    }
	    return front->data;
    }
    bool isEmpty(){
	    if(front==NULL){
		    return true;
		}
	    return false;
	}
};
int main(){
    queue *q = new queue();
	int val;int n;
	cout<<"enter the no of elements of queue"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
	    cin>>val;
	    q->push(val);
	}
	cout<<"after insertion the queue is"<<" ";
	
    q->	display();

	q->pop();
	cout<<"after deletion the queue is"<<" ";
	q->display();
	cout<<"peek data is : "<< q->peek()<<endl ;
    q->	display();
	cout<<(q->isEmpty()  ? "TRUE": "FALSE");
	return 0;
	
}

