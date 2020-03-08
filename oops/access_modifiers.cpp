1.public
2.private
3.protected
#######################################################################################################################################
1.making the members in the class as public
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class circle
{
    public:
    float radius;
    float compute_area(float radius)
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    circle obj;
    obj.radius=5;
    cout<<"THe area of circle is "<<obj.compute_area(obj.radius);
}
##########################################################################################################################################
THe area of circle is 78.5
##########################################################################################################################################
https://ide.geeksforgeeks.org/j3CuPnbtT7
#######################################################################################################################################
