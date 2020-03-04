#include<iostream>
using namespace std;
int main()
{
int a=17;
int b=7;
int *c=&b;
cout<<"before changing the value of b "<<b<<endl;
*c=17;
cout<<"after changing the value of b "<<b<<endl;
}
#######################################################################################################################
before changing the value of b7
after changing the value of b17
#######################################################################################################################
https://ide.geeksforgeeks.org/j25IWvt8rA
