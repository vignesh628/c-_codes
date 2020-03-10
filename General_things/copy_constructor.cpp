* Basically in copy contructor we will copy.
what we will copy ???
we will copy the values that are given by the constructor to the previous object to the current object.
####################################################################################################################################
we have the three types of constructors:
1.non parameteric constructor
2.parametric constructor
3.copy constructor
#####################################################################################################################################
non parameter constructor we wont be passing any parameters:
#include<iostream>
using namespace std;
class a
{
  public:
  a()
  {
      cout<<"the value of a is initialized";
  }
};
int main()
{
    a obj;
}
#######################################################################################################################################
output:
the value of a is initialized
######################################################################################################################################
parmetric constructor:
#include<iostream>
using namespace std;
class a
{
    int x;
  public:
  a(int x)
  {
     this->x=x;
      cout<<"the value of x is "<<x;
  }
};
int main()
{
    a obj(10);
}
###################################################################################################################################
the value of x is 10
##################################################################################################################################
* Incase of the copy constructor the values given by the constructor to the object  will be copied to the another object .
* syntax will be like
int main()
{
class_name obj1(50);
obj2(obj1);
return 0;
}
The values of the object 1 is copied to the object 2.
########################################################################################################################################
#include<iostream>
using namespace std;
class a 
{
    private:
    int value;
    
    public:
    int b;
    a(int value,int value1)
    {
        value=value;
        b=value1;
        cout<<"the value is"<<value<<endl;
    }
};
int main()
{
    int x=10;
    int y=20;
    a obj(x,y);
    cout<<"the value in object is"<<obj.b<<endl;
    a obj2(obj);
    cout<<"the values in the object b is"<<obj2.b<<endl;
    
}
##################################################################################################################################
* If you see above the values 10 and 20 are passed by the object 1 are later copied into the object 2 just with the syntax
classname new_object(old_object);
###################################################################################################################################
* key difference is not only the values of the constructor but all other values that are presented in the old_objectr will be
copied into the new object.
##################################################################################################################################
#include<iostream>
using namespace std;
class a 
{
    private:
    int value;
    
    public:
    int b;
    a(int value,int value1)
    {
        value=value;
        b=value1;
        cout<<"the value is"<<value<<endl;
    }
    int c;
    void disp()
    {
         c=20;
    }
};
int main()
{
    int x=10;
    int y=20;
    a obj(x,y);
    obj.disp();
    cout<<"the value of the c is "<<obj.c<<endl;
    cout<<"the value in object is"<<obj.b<<endl;
    a obj2(obj);
    cout<<"the values in the object b is"<<obj2.b<<endl;
    cout<<"the values in the object c is"<<obj2.c<<endl;
    
}
######################################################################################################################################
the value is10
the value of the c is 20
the value in object is20
the values in the object b is20
the values in the object c is20
#####################################################################################################################################
https://ide.geeksforgeeks.org/jgTiOtwZCW
#####################################################################################################################################
* But using the copy constructor is not the good practice generally.It is always better to pass the variables based on the object.
#########################################################################################################################################
* another way that can be written 
class_name new_object(old_object);
or the 
new_object=old_object;
######################################################################################################################################



