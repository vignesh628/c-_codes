#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void push(int x)
{
    if(rear==N-1)
    {
        cout<<"overflow"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
void pop()
{
    if(front==-1 && rear==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        cout<<queue[front]<<endl;
        front++;
    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        while(front<=rear)
        {
            cout<<queue[front]<<endl;
            front++;
        }
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<queue[front]<<endl;
    }
}
int main()
{
    push(2);
    push(5);
    push(-1);
    peek();
    pop();
    peek();
    display();
    return 0;
}
####################################################################################################################################
output:
2
2
5
5
-1
##########################################################################################################################################
https://ide.geeksforgeeks.org/lDX5CsXeEJ
