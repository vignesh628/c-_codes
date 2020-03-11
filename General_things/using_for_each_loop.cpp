* We can create the list or queue any hashmap of type we want.
*for example 
#include<list>
list<int> lis=new list<int>[v];
here we have initalized the list of the integer type .
[v] will be the number of lists that we are creating internally.
#########################################################################################################################
using the for each loop in c++:
@for example we have the list in c++ of the size 5. each list will have the some elements inside it.
for(int i=0;i<5;i++)
{
 cout<<i<<"->";
 for(int node:adjList[i])
 {
 cout<<node<<",";
 }
 cout<<endl;
 }
 #########################################################################################################################
 @using the list of the integer type.
 #include<iostream>
using namespace std;
#include<list>
int main()
{
    
    list<int> *lis=new list<int>[5];
    for(int i=0;i<5;i++)
    {
        lis[i].push_back(5);
        lis[i].push_back(4);
        lis[i].push_back(3);
        lis[i].push_back(2);
        lis[i].push_back(1);
    }
    for(int i=0;i<5;i++)
    {
        cout<<i<<"->";
        for(int node:lis[i])
        {
            cout<<node<<',';
        }
        cout<<endl;
    }
}
#################################################################################################################################
0->5,4,3,2,1,
1->5,4,3,2,1,
2->5,4,3,2,1,
3->5,4,3,2,1,
4->5,4,3,2,1,
##################################################################################################################################
https://ide.geeksforgeeks.org/AaEJMv4UkJ
###################################################################################################################################
