Create object
Send Feedback
Which of these statements is used to allocate memory for an object dynamically ?
######################################################################################################
output:
New
##########################################################################################################################################
Create object
Send Feedback
Which of the following is/are a valid statement(s) to create an object of class Bird in C++ ?
##############################################################################################
Bird *b=new Bird;
Bird b;
########################################################################################
What is the output
Send Feedback
What is the output -
#include <iostream>
using namespace std;

class Student {
    int rollNumber;
};

int main() {
    Student s;
    cout << s.rollNumber;
}
############################################################################################################################
output:
compiler error
since the variable is private
#######################################################################################################################################
What will be the Output ?
#include <iostream>
using namespace std;

class Box{
    public :
    int width;
    int height;
    int length;
    void volume(){
        cout << length * width * height;
    }
};

int main() {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
}
####################################################################################################################
output:
Garbage value.
#################################################################################################################################
#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}
###############################################################################
output:
Compilation error
this will throw the compilation error since the matching constructor is not found.
################################################################################################################################
Find Incorrect Statement
Send Feedback
Which of the following statements are not true about destructor?
1. It is invoked when object goes out of the scope
2. Like constructor, it can also have parameters 
3. It can be declared in private section
4. It bears same name as that of the class and precedes tilde sign. 
######################################################################################
output:
2
###############################################################################################################################
Copy Assignment Operator
Send Feedback
Consider following piece of code:
class Pair{
  public :
  int first;
  int second;
};

int main(){

  Pair *p1 = new Pair;
  Pair p2;
}
Which of the following statement is feasible ?\
############################################################
p2=*p1;
##################################################################################################################################
Copy Assignment Operator
Send Feedback
Consider following piece of code:
#include<iostream>
using namespace std;

class Pair{
      public :
      int first;
      int second;
};

int main(){

      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2;
      p2 = p1;
      cout << p2.first << " " << p2.second << endl;
}
What will be the output ?
##################################################################
output:
10 20
##################################################################################################################################









