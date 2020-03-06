#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node *ptr;
};
Node* insertatbegining(int value, Node *head) //return type is Node*
{
    Node *me=new Node();
    me->value=value;
    me->ptr=head;
    head=me;
    return head;
}
int main()
{
   Node *head=NULL;
   Node *me=new Node();
   me->value=2;
   me->ptr=NULL;
   head=me;
   cout<<head->value<<endl;
   cout<<head->ptr<<endl;
   head=insertatbegining(3,head);
    cout<<head->value<<endl;
    cout<<head->ptr<<endl;
    head=insertatbegining(4,head);
    cout<<head->value<<endl;
    cout<<head->ptr<<endl;
    cout<<"printing the whole linked list value of elements";
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->ptr;
    }
    
}
######################################################################################################################################
output:
2
0
3
0x1954e70
4
0x1955ea0
printing the whole linked list value of elements
4
3
2
###########################################################################################################################################
https://ide.geeksforgeeks.org/t6fU3qHh3D
