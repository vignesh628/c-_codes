1* To access the global variable when the local varaible is also with the same name.
#include<iostream>
using namespace std;
int x=12;
void changex(int x)
{
    x=x;
    cout<<" the value of the x inside the function is"<<x<<endl;
    cout<<"printing the global variable inside the fucntion"<<::x<<endl;
}
int main()
{
    int x=10;
    cout<<"The value of global variable of x is"<<::x<<endl;
    cout<<"the vallue of local variable of x is"<<x<<endl;
    changex(x);
}
############################################################################################################################################
The value of global variable of x is12
the vallue of local variable of x is10
 the value of the x inside the function is10
printing the global variable inside the fucntion12
###########################################################################################################################################
https://ide.geeksforgeeks.org/CzKW5o28VV
###########################################################################################################################################
2*To define the method name inside the class and write the implementaion outside the class.
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class aa
{
    public:
    void fun();
};
void aa::fun()
{
    cout<<"Fun function is called"<<endl;
}
int main()
{
    //co is class object the syntax in the c++ to initiate the object with class.
    aa obj;
    obj.fun();
}
#########################################################################################################################################
output:
Fun function is called
#########################################################################################################################################
https://ide.geeksforgeeks.org/ja8IwI2dyv
#########################################################################################################################################
3.// C++ program to show that :: can be used to access static 
// members when there is a local variable with same name 
#include<iostream> 
using namespace std; 

class Test 
{ 
	static int x; 
public: 
	static int y; 

	// Local parameter 'a' hides class member 
	// 'a', but we can access it using :: 
	void func(int x) 
	{ 
	// We can access class's static variable 
	// even if there is a local variable 
	cout << "Value of static x is " << Test::x; 

	cout << "\nValue of local x is " << x; 
	} 
}; 

// In C++, static members must be explicitly defined 
// like this 
int Test::x = 1; 
int Test::y = 2; 

int main() 
{ 
	Test obj; 
	int x = 3 ; 
	obj.func(x); 

	cout << "\nTest::y = " << Test::y; 

	return 0; 
} 
#######################################################################################################################################
Value of static x is 1
Value of local x is 3
Test::y = 2;
######################################################################################################################################
4*Using witht the name spce
#include<iostream>
int main()
{
    std::cout<<"not using the namespace std"<<std::endl;
}
######################################################################################################################################
not using the namespace std
######################################################################################################################################
5*If thesame variable is present in the two ancestor classes then we can use the then we can use the scope resolution operator to 
choose the which variable to use.
// Use of scope resolution operator in multiple inheritance. 
#include<iostream> 
using namespace std; 

class A 
{ 
protected: 
	int x; 
public: 
	A() { x = 10; } 
}; 

class B 
{ 
protected: 
	int x; 
public: 
	B() { x = 20; } 
}; 

class C: public A, public B 
{ 
public: 
void fun() 
{ 
	cout << "A's x is " << A::x; 
	cout << "\nB's x is " << B::x; 
} 
}; 

int main() 
{ 
	C c; 
	c.fun(); 
	return 0; 
}
####################################################################################################################################
A's x is 10
B's x is 20
#########################################################################################################################################








