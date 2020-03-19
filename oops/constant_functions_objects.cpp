* We will declare the object constant if you dont want to change the any properties of the object.
* THing is that we can only call the constant function using the constant objects.
* In constant function we cannot set any values for the properties.
Member function
Send Feedback
If a member function does not alter any data in the class, that may be declared as ....................
######################################################################################################################
output:
Constant member function
#####################################################################################################################################
What is the output
Send Feedback
class Student {
    public :

    int rollNumber;
    int age;

};


int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age;
}
#####################################################################################################################################
output:
Garbage Garbage
#####################################################################################################################################
What is the output
Send Feedback
class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}
##################################################################################################################################
output:
Error
##################################################################################################################################
We cannot call any function except the constant fucntion using the constant object.
##################################################################################################################################
