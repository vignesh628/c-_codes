* There are three types of type conversion that are done.
1. Implicit type conversion
2. Explicit type conversion.
3. Type conversion using cast operator.
###########################################################################################################################
* Implicit type conversion is  a type of automatic type conversion done by the compiler.
* It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted 
to unsigned), and overflow can occur.
###########################################################################################################
Implicit:
#include<iostream>
using namespace std;
int main()
{
    int i=97;
    char c=i;
    cout<<"The valus of i is"<<i<<endl;
    cout<<" the value of c is "<<c<<endl;
}
############################################################################################################
output:
The valus of i is97
 the value of c is a
#########################################################################################################################
Explicit type conversion:
This is also called the user defined type casting. Where the type of variable changed by the user.
#include<iostream>
using namespace std;
int main()
{
    float a=2.12;
    int b=(int)a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is"<<b<<endl;
    int v=100;
    int *ptr=&v;
    char* chr=(char*) ptr;
    cout<<"THe value of ptr "<<*ptr<<endl;
    cout<<"The value of chr "<<*chr<<endl;
    // this is doing explicitly.
}
######################################################################################################################
The value of a is 2.12
The value of b is2
THe value of ptr 100
The value of chr d
########################################################################################################################
https://ide.geeksforgeeks.org/J9lJ4D6AEI
########################################################################################################################
Convresion using cast operator:
Conversion using Cast operator: A Cast operator is an unary operator 
which forces one data type to be converted into another data type.
C++ supports four types of casting:
Static Cast
Dynamic Cast
Const Cast
Reinterpret Cast
Example:

#include <iostream> 
using namespace std; 
int main() 
{ 
    float f = 3.5; 
  
    // using cast operator 
    int b = static_cast<int>(f); 
  
    cout << b; 
} 
Output:
3
#################################################################################################################################





