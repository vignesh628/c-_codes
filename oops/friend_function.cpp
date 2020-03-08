Friend function in c++:
* give the special access to private and protected members.
* friend function can be the 
1.method of another class.
2.a global function.
* friends can be used for limited purporse other wise it will lessens the value of data encapsulation.
* friendship is not mutual->
If a is friend of b.
it is not like of b is friend of a.
3.frienship cannot be inherited -> This  friend concept is not there in java.
################################################################################################################################
Using the constructor in  the class:
class A
{
private:
int x;
public:
A()
{
x=12;
}}
The above is the example of non parametric constructor.
################################################################################################################################
class A
{
private:
int a;
public:
A()
{
a=12;
}
friend int add(A,B);
};
