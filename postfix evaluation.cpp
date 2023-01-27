#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define size 20;
int stack[size];
int top=-1;
int ch;
void push(int ele){
    if(top==size-1){
        cout<<"overflow";
    }
    else{
        stack[++top]=ele;
    }
    
}

int pop(){
    if(top==-1){
        cout<<"stack empty"<<endl;
    }
    else{
        ch=stack[top--];
         }
        return ch;
}
void display(){
    cout<<"stack is"<<endl;
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<endl;
    }
}

void main(){
    char postfix[size];
    char ele;
    int op1 ,op2, ans;
    cout<<"postfix expression is: "<<endl;
    cin>>postfix;
    cout<<"postfix evaluation is: "<<postfix<<endl;
    while(int i <=strlen(postfix)-1){
        ele = postfix[i];
        if(isdigit(ele)){
            push(ele-'0')
        }
        else{
            op1=pop();
            op2=pop();
            switch(ele){
                case '+':
                    ans=op2+op1;
                    break;
                case '-':
                    ans=op2-op1;
                    break;
                case '*':
                    ans=op2*op1;
                    break;
                case '/':
                    ans=op2/op1;
                    break;
                    
            }
            push(ans);
        }
        i++;
    }
    cout<<"the ans is : "<<pop();
    
}







