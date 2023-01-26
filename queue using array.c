#include<stdio.h>
#include<stdlib.h>
#define size 50
int queue[size];
int front=-1;
int rear =-1;
int isEmpty(){
    if(front==-1){
        return  1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void insert(){
    printf("enter the value to insert: ");
    int val;
    scanf("%d",&val);
    if(isFull()){
        printf("stack is full");
    }
    else if(front==-1){
        front=rear=0;
        queue[rear] = val;
    }
    else{
        queue[++rear]=val;
    }
}

void delete(){
    if (isEmpty()){
        printf("queue is empty");
    }
    else{
        int temp = queue[front];
        front = front+1;
        printf("the deleted val is %d: ",temp);
    }
}

void display(){
    printf("queue elemnts are : ");
    for(int i=front;i<=rear;i++){
        printf("%3d",queue[i]);
    }
}

int main(){
    printf("****QUEUE****");
    int choice;
    while(1){
    printf("\n1.insert\n2.delete\n3.display\n");
    printf("enter the choice: ");
    scanf("%d",&choice);
   
    switch(choice){
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
            break;
            
    }
}
}



