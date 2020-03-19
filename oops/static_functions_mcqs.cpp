Correct statement
Send Feedback
class Student {
    public :

    int rollNumber;
    static int totalStudents;
};

int Student::totalStudent = 20;

int main() {
    Student s;
    // Correct statement to access totalStudents
}
#######################################################################################################################
output:
Student::totalStudents
################################################################################################################################
What is the output
Send Feedback
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}
#############################################################################################################################
output:
compilation error
#############################################################################################################################
Fill the output
Send Feedback
class Student {
    public :

    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 20;

int main() {
    Student s1, s2, s3, s4;
    cout << Student :: totalStudents;
}
##############################################################################################################################
output:
24
