#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node *address;
};
Node *head=NULL;
void insert_at_begining(int value)
{
    if(head==NULL)
    {
        Node *me=new Node();
        me->value=value;
        me->address=NULL;
        head=me;
    }
    else
    {
        Node *me=new Node();
        me->value=value;
        me->address=head;
        head=me;
    }
}
void detect_loop()
{
    Node *slow,*fast;
    fast=head;
    slow=head;
    while(fast!=NULL &&slow!=NULL)
    {
        fast=fast->address->address;
        slow=slow->address;
        if(fast==slow)
        {
            cout<<"loop is detected"<<endl;
        }
    }
    cout<<"loop is not detected"<<endl;
}
int main()
{
    insert_at_begining(2);
    insert_at_begining(4);
    insert_at_begining(5);
    insert_at_begining(6);
    insert_at_begining(7);
    insert_at_begining(8);
    detect_loop();
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->address;
    }
}
########################################################################################################################################
output:
loop is not detected
8
7
6
5
4
2
########################################################################################################################################
https://ide.geeksforgeeks.org/zgs2SPtzkX
