#include<iostream>
using namespace std;

class Stack
{
    public:
    int top; ///initialise top pointer
    int arr[100]; ///initialise stack with 100
    Stack(){top = -1;} ///set top pointer to -1

    void push(int x)
    {
        if(top>100){cout<<"stack overflow"<<endl; return;} ///stack full case
        arr[++top] = x;
        cout<<"Pushed: "<<x <<" into the stack"<<endl;
    }

    
    int pop()
    {
        if(top<0){cout<<"stack underflow"<<endl; return 0;} ///stack empty case
        return arr[top--]; 
    }

    int peek()
    {
        if(top<0){ cout << "Stack is empty";return 0;}
        return arr[top];

    }
};


int main()
{
    Stack stk1;
    stk1.push(1);
    stk1.push(50);
    stk1.push(20);

    cout<<"The top element is : "<<stk1.peek()<<endl;

    stk1.pop();

    cout<<"The top element after pop is : "<<stk1.peek();




}