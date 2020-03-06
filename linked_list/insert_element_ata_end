#include<iostream>
using namespace std;
#include<bits/stdc++.h>

struct Node
{
    int value;
    Node* ptr;
};
void insert_at_ending(int value,Node* head)
{
    
    Node* x=new Node();
    x->value=value;
    x->ptr=NULL;
    while(head->ptr!=NULL)
    {
        head=head->ptr;
    }
    
    head->ptr=x;
    
}
int main()
{
    Node* head=NULL;
    Node * me=new Node();
    me->value=2;
    me->ptr=NULL;
    head=me;
    insert_at_ending(3,head);
    insert_at_ending(4,head);
    while(head!=NULL)
    {
        cout<<head->value;
        head=head->ptr;
    }
    
}
###################################################################################################################################
234
######################################################################################################################################
https://ide.geeksforgeeks.org/A3Jw0qc4SQ
