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
int count_number_of_elements(TreeNode<int>* root)
{
    int count=1;
    
    for(int i=0;i<root->children.size();i++)
    {
        count=count+count_number_of_elements(root->childre6
        [i]);
        
    }
    // cout<<count;
    return count;
}

int main() {
   
    TreeNode<int>* root = takeInputLevelWise();
    int value=count_number_of_elements(root);
    cout<<value;
}
###########################################################################################################################
input:
10 3 20 30 40 2 40 50 0 0 0 0 
output:
6
###########################################################################################################################
https://ide.geeksforgeeks.org/aa6d4L7jMz
