#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
    virtual void disp1()
    {
        cout<<"this is the dsipaly 1 function in base class"<<endl;
    }
    void disp2()
    {
        cout<<"this is the doisply 2 function in the base class"<<endl;
    }
};
class derived_class:public base_class
{
    public:
    void disp1()
    {
        cout<<"this si the dispaly 1 function in the derived class"<<endl;
        
    }
    void disp2()
    {
        cout<<"this is the dsipay 2 fucntion in the derived class"<<endl;
    }
};
int main()
{
    base_class *obj1;
    derived_class obj2;
    obj1=&obj2;
    obj1->disp1();
    
    
}
    
#########################################################################################################################################
this si the dispaly 1 function in the derived class
##################################################################################################################################
https://ide.geeksforgeeks.org/NlPeJYwWEz
