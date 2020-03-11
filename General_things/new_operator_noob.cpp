The new operator:
* we will allocate the memory for the decalred variables on stack.
* At the run time we will allocate the memory on the heap.
* If the sufficient memory is available it initializes memory to the pointer variable and returns the address.
###########################################################################################################################
Syntax of the new operator in c++:
Node *me = new Node();
what is the new here??
using the new we can assign the value, size to the pointer.
###############################################################################################################################
pointer_variable=new datatype;
The above is the syntax to initialize the memory.
pointer_variable=new datatype(value);
pointer_variable=new datatype[size];
###############################################################################################################################
list<int> *a=new list<int>[5];
what does this mean??
this means that the we are allocating the memory for the 5 lists which means that we are allocating the 5 blocks.
If you use the a.push_back() we can push as many as we want.
  
int *arr=new int[5];
what does this mean??
This means that we are allocting the memory to the arra of 5 blocks which of type integer. In the above one the type is list.
####################################################################################################################################
list<int> *adjList;
public:
     Graph(int v){
     	V = v;
     	adjList = new list<int>[V];
     }
 #################################################################################################################################
 // program with the new operator c++
#include<iostream>
using namespace std;
int main()
{
    //this makes the ptr to point null.
    int *ptr=new int;
    cout<<"To which address the ptr pointing is "<<ptr<<endl;
    cout<<"address where the ptr is present"<<&ptr<<endl;
    cout<<"The value of the thing which ptr is pointing to"<<*ptr<<endl;
    int *ptr1;
    cout<<"To which address the ptr pointing is "<<ptr1<<endl;
    cout<<"address where the ptr is present"<<&ptr1<<endl;
    cout<<"The value of the thing which ptr is pointing to"<<*ptr1<<endl;
    int c;
    cout<<"the value of c is"<<c<<endl;
    cout<<"the value of address of c is"<<&c;
    
}
#####################################################################################################################################
To which address the ptr pointing is 0x1eb4e70
address where the ptr is present0x7ffea3f8bf08
The value of the thing which ptr is pointing to0
To which address the ptr pointing is 0x400b90
address where the ptr is present0x7ffea3f8bf10
The value of the thing which ptr is pointing to1447122753
the value of c is32712
the value of address of c is0x7ffea3f8bf04
###################################################################################################################################
https://ide.geeksforgeeks.org/b3dHWwYuS0
#####################################################################################################################################
// program with the new operator c++
#include<iostream>
using namespace std;
int main()
{
    int *ptr1=NULL;
    ptr1=new int;
    float *ptr2=new float(2.22);
    int *ptr3=new int[20];
    // this will be like array.
    *ptr1=2;
    cout<<"the value of thepointer variable ptr1 is  "<<*ptr1<<endl;
    cout<<" the value of the pointer variable ptr2 is "<<*ptr2<<endl;
    cout<<" the value of the pointer variable ptr3 is "<<*ptr3<<endl;
    cout<<ptr3[0]<<endl;// this is the value ib ptr3[0]
    cout<<ptr3[1]<<endl;
    // there is no difference in declaration of both.
    int *ptr4=new int;  
    int *ptr5;
    ptr5=new int;
}
#####################################################################################################################################
the value of thepointer variable ptr1 is  2
 the value of the pointer variable ptr2 is 2.22
 the value of the pointer variable ptr3 is 0
0
0
######################################################################################################################################
https://ide.geeksforgeeks.org/urzFMKQYrz
#####################################################################################################################################
