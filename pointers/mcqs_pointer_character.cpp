Pointers Output
Send Feedback
What will be the output ?
 char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
########################################################
output:
b
##################################################################################################################################
https://ide.geeksforgeeks.org/LhJPV0wXuo
##################################################################################################################################
#include<iostream>
using namespace std;
int main()
{
    int a=45;
    int *p=&a;
    cout<<&a<<endl;
    cout<<p<<endl;
    // &a=&a+1; -> this will give the error
    p=p+1;
    cout<<*p<<endl;
    cout<<&p<<endl;
}
###########################################################
output:
0x7ffc8f0bb3bc
0x7ffc8f0bb3bc
-1895058496
0x7ffc8f0bb3c0
##################################################################################################################################
ointers Output
Send Feedback
What will be the output ?
 char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
 #####################################
 output:
 b
 #################################################################################################################################
 What is the output
Send Feedback
Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
#####################################
output:
xyz
####################################################################################################################################
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    char b[]="abc";
    char *c=&b[0];
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<*(c+1)<<endl;
    cout<<&b<<endl; // The only way to print the address is this. we cannot print the address using the pointers incase of character arrays
    cout<<b<<endl;
}
###################################
abc
a
b
0x7ffd46a12090
abc
#####################################################################################################################################
What is the output
Send Feedback
Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;
####################################
abc
a
b
0x7ffd46a12090
abc
#######################################################################################################################################
Fill the output
Send Feedback
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
######################################
output:
h h
######################################################################################################################################





