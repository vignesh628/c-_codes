here we are able to acess the class like structure because we have declared the pointer. pointer is basically pints to the null when it is initializ
ed. we can use the -> operator to access the values that are stored inside the class or structure .
 ####################################################################################################################################
#include<iostream>
using namespace std;
class a  
{
    public:
    void disp()
    {
        cout<<"Hello all this is class a display finction"<<endl;
    }
};
int main()
{
    a *obj;
    obj->disp();
    
}
######################################################################################################################################
Hello all this is class a display finction

#######################################################################################################################################
https://ide.geeksforgeeks.org/reBGAK58n3
