#include<stdio.h>
#define size 100
int stack[100];
int top=-1;
void push(){
	printf("enter the value to be insert\n");
	int val;
	scanf("%d",&val);
	if(top==size-1){
		printf("stack overflow");
	}
	else{
		top++;
		stack[top]=val;
	}
}

void pop(){
	if(top==-1){
		printf("stack under flow");
	}
	else{
		printf("%d",stack[top]);
		top=top-1;
	}
}

void peek(){
	if(top==-1){
		printf("stack under flow");
	}
	else{
		printf("%d",stack[top]);
}
}

void display(){
	if(top>0){
		printf("the elemenys of the top is : ");
		for(int i=top;i>=0;i--){
			printf("%3d",stack[i]);
		}
	}
		else{
			printf("stack is empty");
		}
	}



int main(){
	int choice;
	printf("enter the operation of stack\n");
while(1){
	printf("1.push\n");
	printf("2.pop\n");
	printf("3peek\n");
	printf("4.display\n");
	printf("enter the choice: ");
	scanf("%d",&choice);
	switch(choice){
	     case 1 : push();
			      break;
         case 2 : pop();
	              break;
 	 	 case 3 : peek();
			   	  break;
         case 4:  display();
			   	  break;
  	     default: "invalid choice";
  	     		  break;
	}
}
}

