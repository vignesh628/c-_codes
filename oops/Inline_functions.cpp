* why do we use the inline function??
* when the program executes the funciton call the memory address of the instructiojn following the function call copies the arguments 
of the function on the stackand finally transfers the control to the speciifed function.
* The cpu then executes the function code stores the function return value in predefined memory location/ register and transfer the
control to the calling function.
*this becomeds ovcer head if the execution time of the function is less than the switching time from the caller function to the called
function.
* c++ provides the inline functions to reduce the function call overhead. inline function is called whole code of inline function gets 
inserted.
* syntax:
inline return_type function_name(parameters)
{
//function code
}
#########################################################################################################################################
* inline is only request to the compiler it is not like the command to the compiler.
* compiler can ignore the request of inlining.
* compiler may not perform inlining in scircumstances like:
  1.function contains loop.
  2.if function contain static variables.
  3.if a function is recursive.
  4.if the function type is other than void.
  5.if function cionatins swith or go to statement.
 ######################################################################################################################################
 advantages of using the inline finction:
 1.function call overhead doesnt occur.
 2.saves the overhead of the return call from the function.
 #######################################################################################################################################
 #include<iostream>
 using namespace std;
 inline int cube(s*s*s)
 {
 return s*s*s;
 }
 int main()
 {
 cout<<"cube if 3 is ",cube(3)<<endl;
 return 0;
 }
 ####################################################################################################################################
 
