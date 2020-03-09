* Overloading:
1.Relationship between the methods of same class.
2.Does not require more than one class for overloading.
Overriding:
1. Relationship between the methods of super clas and sub class(In other words base class and derived class).
2. Requires more than one class for overriding.
#############################################################################################################################
###method overrding in the c++###
#include<iostream>
using namespace std;
class a 
{
    public:
    void display()
    {
        cout<<"we are dislaying the base class"<<endl;
    }
};
class b:public a
{
    public:
    void display()
    {
        cout<<"we are displaying the derived class"<<endl;
    }
};
int main()
{
    a obj;
    obj.display();
    b obj1;
    obj1.display();
    return 0;
}
############################################################################################################################
output:
we are dislaying the base class
we are displaying the derived class
############################################################################################################################
link:
https://ide.geeksforgeeks.org/fciOyRUdbx
############################################################################################################################
method overloading in c++:
#include<iostream>
using namespace std;
class a
{
    public:
    void display(int a)
    {
    cout<<" the value of int a is"<<a<<endl;
    }
    void display(float b)
    {
        cout<<"the value of flaot b is "<<b<<endl;
    }
    
};
int main()
{
    a obj;
    int x=2;
    float y=2.2;
    obj.display(x);
    obj.display(y);
}
###########################################################################################################################
output:
 the value of int a is2
the value of flaot b is 2.2
############################################################################################################################
https://ide.geeksforgeeks.org/owGjlUkFmN
#############################################################################################################################
