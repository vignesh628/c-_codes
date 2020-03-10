#calling up by the value need to return and set it but calling by reference the varaibel gets set automatically.
########################################################################################################################
call by value:
#include<iostream>
using namespace std;
int add(int a,int b, int c)
{
    c=a+b;
    return c;
}
int main()
{
    int a=3;
    int b=4;
    int c;
    c=add(a,b,c);
    cout<<"the value of c is "<<c<<endl;
}
#########################################################################################################################
output:
the value of c is 7
########################################################################################################################
https://ide.geeksforgeeks.org/ov2dol7tyz
############################################################################################################################
call by reference:
#include<iostream>
using namespace std;
void add(int &a,int &b, int &c)
{
    c=a+b;
    
}
int main()
{
    int a=3;
    int b=4;
    int c;
    add(a,b,c);
    cout<<"the value of c is "<<c<<endl;
}
#############################################################################################################################
the value of c is 7
#############################################################################################################################
https://ide.geeksforgeeks.org/FxzgtDS84S
############################################################################################################################
if we wont retrun in call by value:
#include<iostream>
using namespace std;
void  add(int a,int b, int c)
{
    c=a+b;
}
int main()
{
    int a=3;
    int b=4;
    int c;
    add(a,b,c);
    cout<<"the value of c is "<<c<<endl;
}
###########################################################################################################################
the value of c is 0
################################################################################################################################
https://ide.geeksforgeeks.org/eWO0MLKyml
###########################################################################################################################
Call by pointer:
#include<iostream>
using namespace std;
void  add(int *a,int *b, int *c)
{
    *c=*a+*b;
}
int main()
{
    int a=3;
    int b=4;
    int c;
    add(&a,&b,&c);
    cout<<"the value of c is "<<c<<endl;
}
###############################################################################################################################
the value of c is 7
##########################################################################################################################
https://ide.geeksforgeeks.org/9dGRJNUyaM
