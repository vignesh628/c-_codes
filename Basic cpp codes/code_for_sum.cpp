#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    int product=1;
    if(m==1)
    {
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    }
    else if(m==2)
    {
    for(int i=1;i<=n;i++)
    {
        product=product*i;
    }
    cout<<product;
    }
    else{
        cout<<-1;
    }
    
}
