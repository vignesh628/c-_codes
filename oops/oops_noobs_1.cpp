#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
     void disp1()
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
    base_class *obj1=NULL;
    // cout<<*obj1<<endl;-> this will throw the error because it is not pointing to any value.
    cout<<obj1<<endl; //obj1 is the address of where the object1 is poinitng to.
    
    cout<<&obj1<<endl;// this is the address where the obj1 is located.
    
}
    
##############################################################################################################################
output:
0
0x7ffda63f7240
##############################################################################################################################
https://ide.geeksforgeeks.org/NlPeJYwWEz
###############################################################################################################################
#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
     void disp1()
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
    base_class *obj1=NULL;
    derived_class obj2;
    // cout<<obj2<<endl;-> this will throw the error
    cout<<&obj2<<endl;
    // cout<<*obj2<<endl; -> this also will throw the error.
    
}
    
################################################################################################################################
0x7ffebae0e99f
#################################################################################################################################
#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
     void disp1()
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
    base_class *obj1=NULL;
    cout<<obj1<<endl;
    derived_class obj2;
    obj1=&obj2;
    cout<<obj1<<endl;
    cout<<&obj2<<endl;
    
}
################################################################################################################################
0
0x7fff034703ef
0x7fff034703ef
#################################################################################################################################
#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
     void disp1()
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
    // obj1.disp1();//this will throw the error.
    obj1->disp1();
}
####################################################################################################################################
output:
this is the dsipaly 1 function in base class
######################################################################################################################################
#include<iostream>
using namespace std;
class base_class 
{
    public:
    base_class()
    {
        int x=1;
    }
     void disp1()
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
    obj2.disp1();
    
}
    
######################################################################################################################################
output:
this is the dsipaly 1 function in base class
this si the dispaly 1 function in the derived class
#######################################################################################################################################
Usaing like the virtual function:

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
    
#######################################################################################################################################
output:
this si the dispaly 1 function in the derived class
#######################################################################################################################################
