#include<iostream>
using namespace std;
int count_zeros(int n)
{
    int count=0;
    if(n==0)
    {
        return 0;
    }
    count=count_zeros(n/10);
    if(n%10==0)
    {
        count=count+1;
        
    }
    if(n%10!=0)
    {
        count=count+0;
        
    }
    
    return count;
}
int main()
{
  int x;
  cin>>x;
  int val=count_zeros(x);
  cout<<val;
}
#############################################################################################################################
input:
102050
output:
3
###############################################################################################################################
https://ide.geeksforgeeks.org/3Prv7ekB38
