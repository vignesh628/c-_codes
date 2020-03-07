#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node* address;
};
Node *head=NULL;
void insert_at_begining(int value)
{
    Node *ptr=new Node();
    if(head==NULL)
    {
        
        ptr->value=value;
        ptr->address=NULL;
        head=ptr;
       
    }
    else
    {
        ptr->value=value;
        ptr->address=head;
        head=ptr;
        
    }
    
}
void insert_at_ending(int value)
{
    Node *ptr=new Node();
    Node *temp=head;
    if(head==NULL)
    {
        
        ptr->value=value;
        ptr->address=NULL;
        head=ptr;
       
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
   
    }
}
int main()
{
    insert_at_ending(200);
    insert_at_begining(2);
    insert_at_begining(3);
    insert_at_begining(4);
    insert_at_begining(5);
    insert_at_ending(100);
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
5
4
3
2
200
100
#####################################################################################################################################
https://ide.geeksforgeeks.org/LrhiRQF1TX
