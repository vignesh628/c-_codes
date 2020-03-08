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
Making the members private will throw  the error:
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class circle
{
    protected:
    float radius;
    public:
    float compute_area(float r)
    {
        radius=r;
        return 3.14*radius*radius;
    }
};
int main()
{
    circle obj;
    obj.radius=5;
    cout<<"THe area of circle is "<<obj.compute_area(obj.radius);
}
########################################################################################################################################
error:
prog.cpp: In function 'int main()':
prog.cpp:7:11: error: 'float circle::radius' is protected
     float radius;
           ^
prog.cpp:18:9: error: within this context
     obj.radius=5;
         ^
prog.cpp:7:11: error: 'float circle::radius' is protected
     float radius;
           ^
prog.cpp:19:58: error: within this context
     cout<<"THe area of circle is "<<obj.compute_area(obj.radius);
#######################################################################################################################################
https://ide.geeksforgeeks.org/FBaK8SDLk2
########################################################################################################################################
Making the members private but still accessing them:
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class circle
{
    private:
    float radius;
    public:
    float compute_area(float r)
    {
        radius=r;
        return 3.14*radius*radius;
    }
};
int main()
{
    circle obj;
    int r=10;
    cout<<"THe area of circle is "<<obj.compute_area(r);
}
############################################################################################################################################
THe area of circle is 314
 ######################################################################################################################################
 https://ide.geeksforgeeks.org/3tyUAr33c6
######################################################################################################################################
Protected:
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class parent
{
    protected:
    int id_protected;
};
class child:parent
{
    public:
    void setid(int id)
    {
        id_protected=id;
    }
    void display_id()
    {
        cout<< " the id that we have set is the dispaly id "<<id_protected<<endl;
    }
};
int main()
{
    child obj;
    obj.setid(20);
    obj.display_id();
    return 0;
}
######################################################################################################################################
output:
 the id that we have set is the dispaly id 20
######################################################################################################################################
https://ide.geeksforgeeks.org/KQQf9g4fLJ



