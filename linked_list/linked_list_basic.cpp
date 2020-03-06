#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int data;
    Node *link;
};
Node *head=NULL;
int main()
{
//printing the head-> link will give the segementation fault error.
    Node *me=new Node();
    me->data=2;
    me->link=NULL;
    head=me;
    cout<<head->data<<endl;
    cout<<head<<endl;
    cout<<me<<endl;
    cout<<head->link<<endl;
    cout<<me->link<<endl;
}
############################################################################################################################
output:
2
0x16bce70
0x16bce70
0
0
#########################################################################################################################
https://ide.geeksforgeeks.org/5WItzBdCEx
