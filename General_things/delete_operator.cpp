* New operator is used to allocate the memory to the pointer variable.
* Delete operator ius used to deallocate the memory to the pointer variable.
* user has previlige to deallocate the memory allocated to the pointer variable.
############################################################################################################################################
what is the difference between constructor and destructor 
constructor does not create an object. It just initializes the state of the object. Destructor is used to destroy the created object.
we will use the negation operator before the class name to indicate the destructor destruction is done automatically.
###########################################################################################################################################
we have two operators during the dynamic for allocation and deallocation
new is used for the allocation
 delete is used for the deallocation
##########################################################################################################################################
syntax of using the new:
int *a=new int;
int *a=new int(10); // value of 10 will be allocated to the a.
int *a = new int[10]; // this will be the array a.
to assign the value for the a we will use it as the address
for(int i=0; i<10;i++)
{
a[i]=i;
}
we cannot give like the *a[i] bcz the a is the address and i is the value.
############################################################################################################################################
syntax to use the delete operator:
delete pointer_variable;
If it is in the form of the allocated memory:
delete[] pointer_variable;
########################################################################################################################################
code:
#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;
    ptr= new int;
    *ptr=5;
    float *ptr1=new float(5.55);
    int *ptr2=new int[5];
    for (int i=0;i<5;i++)
    {
        ptr2[i]=i;
    }
    for(int i=0;i<5;i++)
    {
        cout<<ptr2[i]<<endl;
    }
    delete ptr;
    delete ptr1;
    delete ptr2;
}
#################################################################################################################################
output:
0
1
2
3
4
#####################################################################################################################################
https://ide.geeksforgeeks.org/rtAvz7d2gW
