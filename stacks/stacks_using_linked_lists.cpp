#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node* address;
};
Node *head=NULL;
void push(int value)
{
    Node* me=new Node();
    me->value=value;
    me->address=head;
    head=me;
}
void pop()
{
    head=head->address;
}
void peek()
{
    cout<<"peek value is"<<head->value<<endl;
}
void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->address;
    }
}
int main()
{
    push(6);
    peek();
    push(5);
    peek();
    push(4);
    peek();
    push(3);
    peek();
    display();
    pop();
    peek();
    pop();
    peek();
    push(2);
    peek();
    display();
}
#####################################################################################################################################
ouput:
peek value is6
peek value is5
peek value is4
peek value is3
3
4
5
6
peek value is4
peek value is5
peek value is2
2
5
6
######################################################################################################################################
https://ide.geeksforgeeks.org/lDX5CsXeEJ
