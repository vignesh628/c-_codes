* While calling the functions 'this' will be passsed hidden argument.
* The passed this pointer will be available as the local variable in the called function.
* this pointer is constant pointer holds the address of current object.
* This pointer is not avaliable for the static fucntions since they can be called without the object initialisation.
##########################################################################################################################
#include<iostream>
using namespace std;
class a 
{
  int x;
  public:
  void setx(int y)
  {
      x=y;
  }
  void disp()
  {
      cout<<"the value of x is "<<x;
  }
};
int main()
{
    int y=10;
    a obj;
    obj.setx(y);
    obj.disp();
    
}
############################################################################################################################
output:
the value of x is 10
###########################################################################################################################
But if the global variable is same as the variable declared like this
  #include<iostream>
using namespace std;
class a 
{
  int x;
  public:
  void setx(int x)
  {
      x=x;
  }
  void disp()
  {
      cout<<"the value of x is "<<x;
  }
};
int main()
{
    int y=10;
    a obj;
    obj.setx(y);
    obj.disp();
    
}
output:
the value of x is 1227675968
###########################################################################################################################
Here we can use the this pointer so that this pointer is the pointer poining to  the address of the object.
 #include<iostream>
using namespace std;
class a 
{
  int x;
  public:
  void setx(int x)
  {
     this->x=x;
  }
  void disp()
  {
      cout<<"the value of x is "<<x;
  }
};
int main()
{
    int y=10;
    a obj;
    obj.setx(y);
    obj.disp();
    
}
############################################################################################################################
output:
the value of x is 10
