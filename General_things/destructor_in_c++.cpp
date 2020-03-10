# we will be using the destructor with the symbol of negation (~).
* Destructor is used to destroy the objects that have been created by the constructor.
* characterstics of the destructor:
1.It never takes the argument as the input.
2.only one destructor is needed to destroy the objects of the constructor.
3.compiler automatically makes the destructor.
##################################################################################################################################
#include<iostream>
using namespace std;
class a 
{
    public:
    a()
    {
        cout<<"Hello this is constructor"<<endl;
    }
    ~a()
    {
        cout<<"Hello this is destructor"<<endl;
    }
};
int main()
{
    a obj;
}
################################################################################################################################
output:
Hello this is constructor
Hello this is destructor

###################################################################################################################################
https://ide.geeksforgeeks.org/XR5XTaeJK7
