#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
    int value;
    Node* left_address;
    Node* right_address;
};
Node* head=NULL;
void create_node(int value)
{
    Node* me=new Node();
    me->value=value;
    me->right_address=NULL;
    me->left_address=NULL;
    head=me;
    
}


int main()
{
    create_node(5);
    cout<<"tree value is"<<head->value<<endl;
    cout<<"treeright_address is"<<head->left_address<<endl;
    cout<<"tree right_address is"<<head->right_address<<endl;
    
}
######################################################################################################################################
tree value is5
treeright_address is0
tree right_address is0
######################################################################################################################################
https://ide.geeksforgeeks.org/MUwLW19nPq
