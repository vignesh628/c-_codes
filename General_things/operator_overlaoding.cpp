* IN c++ every operator can be overloaded but there are few operaors that cannot be overloaded.
* They are 
1. scope resolution operator
* used for the function overriding outside, used for the friend function
* used to access the static variables.
* used to access the namespace using std.
2.size of
3.member selector(:)
4.member pointer selector(*)
5.ternery operator(?:)
############################################################################################################################
* operator overlaoding is the type of polymorphism in which the operator can be overloaded and gives the user defined meaning 
of it.
*syntax is operator symbol()
*symbol is the one which we are overlaoding.
#############################################################################################################################
#include<iostream>
using namespace std;
class test 
{
    private :
    int count;
    public:
    test(int a)
    {
        count=a;
    }
    void operator +()
    {
        count=count+5;
        cout<<"the value of count is "<<count<<endl;
    }
   
};
int main()
{
   
   test obj(5);
   +obj;
}
##############################################################################################################################
the value of count is 10
###########################################################################################################################
https://ide.geeksforgeeks.org/P8C19FmZiV
