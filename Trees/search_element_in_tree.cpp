#include<iostream>
using namespace std;
#include<queue> 
struct Node
{
    int value;
    Node* left_address;
    Node* right_address;
};
Node* create_node(int value)
{
    Node *me=new Node();
    me->value=value;
    me->left_address=NULL;
    me->right_address=NULL;
    return me;
}
void search_key(Node* head,int key)
{
    queue<Node*> q;
    q.push(head);
    int flag=0;
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp->value==key)
        {
            cout<<"element is found"<<endl;
            flag=1;
            break;
        }
        if(temp->left_address!=NULL)
        {
            q.push(temp->left_address);
        }
        if(temp->right_address!=NULL)
        {
            q.push(temp->right_address);
        }
        
    }
    if(flag==1)
    {
        cout<<"element is not found";
    }
}
int main()
{
   Node* head=NULL;
   head=create_node(2);
   head->left_address=create_node(3);
   head->left_address->left_address=create_node(4);
   head->right_address=create_node(5);
   head->right_address->right_address=create_node(6);
   cout<<head->value<<endl;
   cout<<head->left_address->value<<endl;
   cout<<head->left_address->left_address->value<<endl;
   cout<<head->right_address->value<<endl;
   cout<<head->right_address->right_address->value<<endl;
   search_key(head,6);
   search_key(head,7);
}
######################################################################################################################################
ouput:
2
3
4
5
6
element is found
element is not found
######################################################################################################################################
https://ide.geeksforgeeks.org/z9YOCk4zoc
