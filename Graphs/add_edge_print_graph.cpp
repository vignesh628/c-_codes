#include<iostream>
using namespace std;
#include<list>
list<int> graph[10];
void addedge(int u, int v,bool bidirectional=true)
{
    graph[u].push_back(v);
    if(bidirectional=true)
    {
        graph[v].push_back(u);
    }
}
void print_graph()
{
    for(int i=0;i<10;i++)
    {
        cout<<i<<"->";
        for(node:graph[i])
        {
            cout<<node<<endl;
        }
    }
}
int main()
{
    addedge(1,3);
    addedge(0,4);
    addedge(1,4);
    addedge(1,5);
    print_graph();
}
###############################################################################################################################
output:
0->4
1->3
4
5
2->3->1
4->0
1
5->1
6->7->8->9->
#################################################################################################################################
https://ide.geeksforgeeks.org/8SlQDdw3po
