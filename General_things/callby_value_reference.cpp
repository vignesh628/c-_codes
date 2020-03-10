#calling up by the value need to return and set it but calling by reference the varaibel gets set automatically.
##########################################################################################################################
Advantages of using Call by value method
Pros/benefits of a call by value method:

The method doesn't change the original variable, so it is preserving data.
Whenever a function is called it, never affect the actual contents of the actual arguments.
Value of actual arguments passed to the formal arguments, so any changes made in the formal argument
does not affect the real cases
########################################################################################################################
Advantages of using Call by reference method
Pros of using call by reference method:

The function can change the value of the argument, which is quite useful.
It does not create duplicate data for holding only one value which helps you to save memory space.
In this method, there is no copy of the argument made. Therefore it is processed very fast.
Helps you to avoid changes done by mistake
A person reading the code never knows that the value can be modified in the function.
#########################################################################################################################
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
