#include<iostream>
using namespace std;
template<typename T>

T max_func(T x,T y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<"the maximum value in the integers is "<<max_func(3,5)<<endl;
    cout<<"the maxiumum value in the charracters is "<<max_func('a','x')<<endl;
}
#####################################################################################################################
output:
the maximum value in the integers is 5
the maxiumum value in the charracters is x
#####################################################################################################################
https://ide.geeksforgeeks.org/beFBhawXOk
