#include<iostream>
using namespace std;
#include <math.h> 
int main()
{
    int n;
    cin>>n;
    int fine=0;
    int count=0;
    while(n!=0)
    {
        int temp=n%10;
        
        fine=fine+(temp*pow(2,count));   
        n=n/10;
    count++;
        
    }
    cout<<fine;
}
