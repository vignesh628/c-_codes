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
using the queue:
#include<queue>
queue<int> q;
Why we declare the queue to be like this not like the pointer sice we wnat the only one queue to manipulate the data we use like this.
####################################################################################################################################
@ There are 3 ways we can use new keyword and initialise dynamically.
 int *q=new int;
int *q=new int(5.5); initialse with the value 5.5
 int *q=new int[5]; initilaise with memory usage.
######################################################################################################################################
@writing using the queue.
 #include<iostream>
using namespace std;
#include<queue>
int main()
{
    // # we can initialize the pointer variables only with the new keyword
    queue<int>q;
    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
} 
#####################################################################################################################################
output:
0123456789
 ####################################################################################################################################
 https://ide.geeksforgeeks.org/2T7zlFfZbm
