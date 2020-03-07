#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node* address;
};
Node *head=NULL;
Node* insert_at_begining(int value,Node* head)
{
    Node *ptr=new Node();
    if(head==NULL)
    {
        
        ptr->value=value;
        ptr->address=NULL;
        head=ptr;
        return head;
    }
    else
    {
        ptr->value=value;
        ptr->address=head;
        head=ptr;
        return head;
    }
    
}
Node* insert_at_ending(int value,Node* head)
{
    Node *ptr=new Node();
    Node *temp=head;
    if(head==NULL)
    {
        
        ptr->value=value;
        ptr->address=NULL;
        head=ptr;
        return head;
    }
    else
    {
    ptr->value=value;
    ptr->address=NULL;
    while(temp->address!=NULL)
    {
        temp=temp->address;
    }
    temp->address=ptr;
    return head;
    }
}
int main()
{
    head=insert_at_ending(200,head);
    head=insert_at_begining(2,head);
    head=insert_at_begining(3,head);
    head=insert_at_begining(4,head);
    head=insert_at_begining(5,head);
    head=insert_at_ending(100,head);
    while(true)
    {
        
        cout<<head->value<<endl;
        if((head->address)==NULL)
        {
           break;
        }
        head=head->address;
    }
    
}
######################################################################################################################################
https://ide.geeksforgeeks.org/0YrXAkvJqI
######################################################################################################################################
5
4
3
2
200
100
