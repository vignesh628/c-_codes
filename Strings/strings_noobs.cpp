#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    string s="vignesh babu";
    char arr[]="vignesh babu";
    cout<<s<<endl;
    cout<<arr<<endl;
    cout<<s.length()<<endl;
    cout<<strlen(arr)<<endl;
    
}
####################################################################################################################
output:
vignesh babu
vignesh babu
12
12
#################################################################################################################
we use the new keyword to create them dynamcially.
################################################################################################################
What will be the output of the following code ?
#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;

    // Constructor 1
    Student(int num){
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    void print(){
        cout << name << " "  <<  rollNo << " ";
    }
};

int main() {
    Student s1(101);
    s1.print();
    Student *s2 = new Student(150, "xyz");
    s2 -> print();
}
##################################################################################################################
output:
abc 101 xyz 150
#########################################################################################################################
What is the output
Send Feedback
#include <iostream>
using namespace std;

class Student{
    public :
        char *name;
        int rollNo;

        void print(){
            cout << name << " "  <<  rollNo << " ";
        }
};

int main() {
    char name[] = "Misha";
    Student s1;
    s1.name = name;
    s1.rollNo = 101;

    name[0] = 'N';
    Student s2;
    s2.name = name;
    s2.rollNo = 102;

    s1.print();
    s2.print();
}
#############################################################################################################################
output:
Nisha 101 Nisha 102
##################################################################################################################################
    
    
    
    
    
    
