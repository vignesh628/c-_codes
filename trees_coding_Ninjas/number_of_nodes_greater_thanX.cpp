#include <iostream>
using namespace std;
#include <vector>
#include <queue>
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};



TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void print_tree(TreeNode<int>* root)
{
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
       cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print_tree(root->children[i]);
    }
}

int nodesGreaterThanX(TreeNode<int> *root, int x) {
    
    int count=0;
    if(root->data>x)
    {
        count=1;
    }
    else
    {
        count=0;
    }
    for(int i=0;i<root->children.size();i++)
    {
        count+=nodesGreaterThanX(root->children[i],x);
    }
    return count;
}

int main() {
   
    TreeNode<int>* root = takeInputLevelWise();
    // int value=count_number_of_elements(root);
    print_tree(root);
    int count=nodesGreaterThanX(root,20);
    cout<<count;
}
###################################################################################################################
input:
10 3 20 30 40 2 40 50 0 0 0 0 

output:
10:20,30,40,
20:40,50,
40:
50:
30:
40:
4
####################################################################################################################
https://ide.geeksforgeeks.org/zXdGU6K5QZ
