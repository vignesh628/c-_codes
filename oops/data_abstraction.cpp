How the data abstraction is acheived in c++??
1. this is the one of the most important feature in c++.
2.data abstraction is just displaying the essential details and hiding the background details or implementation.
3.we can implement abstraction using the 
@ classes: classes help us to group the data members and memeber functions using the access specifiers.
* class can decide the which data member will be visible to outside world and which is not.
@abstraction in header files:
* we can achieve the abstraction using the header files.
* consider the pow() method present in the math.h header file.
* we will pass the arguments without knowing the underlying algorithm according to the function.
@abstraction using the access specifiers.
* members can be declared public can be accessed  from anywhere in the program.
* members that are declared private can be accessed within the class. there are not provided the access outside the class

The important information needed given to the world can be marked as the public.
and public members can accesss the private members as they are inside the class.
##########################################################################################################################################

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
##################################################################################################################################
the value of a is10
 the vlaue of b is20
###################################################################################################################################
If you see the above functionn we cannot directly access the variables a and b directly.
we should call the funcitons set to set the values.
###################################################################################################################################
advantages of data abstraction:
* avoids code duplication and increases reusability.
* can change the implementation of class independently without the affecting the user.
* helps increase the security of an appliction or program as only important detaisl are provided to the user.
###################################################################################################################################
