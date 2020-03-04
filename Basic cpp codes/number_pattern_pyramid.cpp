Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

############################################code#######################################
#include<iostream>
using namespace std;
int main()
{
    int n;
    n=4;
    for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>=i;k--)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        if(i>1)
        {
        for(int p=2;p<=i;p++)
        {
            cout<<p;
        }
        }
        cout<<endl;
    }
}
