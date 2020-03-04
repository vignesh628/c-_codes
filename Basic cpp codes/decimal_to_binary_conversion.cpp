#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int count=0;
    int out=0;
    int binary[n];
    int i=0;
    while(n!=0)
    {
        int temp=n%2;
        binary[i]=temp;
        count++;
        n=n/2;
        i++;
    }
    for(int j=count-1;j>=0;j--)
    {
       
    cout<<binary[j];
    }
    
   
}
