*Encapsulation is defined as the wrapping the data into a single unit.
* In oops encpasualtion is defined as the binding together the data and the functions that manipulate them.
* encapuslation also lead to the data abstraction and hiding.
* In c++ encpasulation can be achieved ny using the class and the access modifiers.
* access mpodifiers are nothing bu the public, private, protected.
###############################################################################################################################
#include<iostream>
using namespace std;
class a 
{
    private :
    int a,b;
    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"the value of a is"<<a<<endl;
        cout<<" the vlaue of b is"<<b<<endl;
    }
};

int main()
{
    a obj;
    obj.set(10,20);
    obj.display();
    return 0;
}
################################################################################################################################
the value of a is10
 the vlaue of b is20
##################################################################################################################################
* in the above function data can be accessed only using the get and set functions.
* The process of implementing the encapsulation can be divided into two steps:
1. data members should be labeled as the private.
2. member funciton manipulates the data members should be label the public using the public access specifier.
###################################################################################################################################
