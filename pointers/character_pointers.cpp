* The way character pointers work is different from how the pointers work.
* This is due to the difference in the implementation of the cout.
########################################################################################################################
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    char b[]="abc";
    char *c=&b[0];
    cout<<c<<endl;// this c is supposed to print the address of the b but it print the abc.
    cout<<*c<<endl; //This will print the begining character which is a this is fine.
    cout<<*(c+1)<<endl; //This is fine will print the b.
    cout<<&b<<endl; //This is perfect wil print the starting address of b.
    cout<<b<<endl; //This is supposed to peint the starting address of b will print the abc.
}
###########################################################################################################################
output:
abc
a
b
0x7ffd0a2fcb00
abc
###########################################################################################################################
https://ide.geeksforgeeks.org/xkPYh1XQfv
###############################################################################################################################
