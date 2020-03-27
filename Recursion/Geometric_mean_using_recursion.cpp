#include<iostream>
#include <cmath>
using namespace std;
float geometric_sum(float k)
{
    float value=1/pow(2,k);
    if(k==0)
    {
        return 1;
    }
    value=float(geometric_sum(k-1));
    if(k!=0)
    {
        value=value+1/pow(2,k);
    }
    return value;
}
int main()
{
    float x;
    cin>>x;
    float value=geometric_sum(x);
    cout<<value;
}
###############################################################################################################################
input:
3
output:
1.875
##############################################################################################################################
https://ide.geeksforgeeks.org/kPFBwF0uL8
