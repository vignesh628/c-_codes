#include<iostream>
using namespace std;
#define N 5
int stack[5];
// Dont forget we use the top in the operations of stacks and queues initialised with -1
int top=-1;
void push(int value)
{
 if(top==N-1)
 {
     cout<<"overflow"<<endl;
 }
 else
 {
     top=top+1;
     stack[top]=value;
 }
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"No elements to display";
    }
    for(int i=0;i<top+1;i++)
    {
        cout<<stack[i]<<endl;
    }
}
void peek()
{
    cout<<"peek element is "<<stack[top]<<endl;
}
int main()
{
   push(5);
   push(4);
   push(3);
   push(2);
   display();
   peek();
   pop();
   push(1);
   display();
}
######################################################################################################################################
output:
5
4
3
2
peek element is 2
5
4
3
1
#########################################################################################################################################
https://ide.geeksforgeeks.org/lDX5CsXeEJ
