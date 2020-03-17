What is the output
Send Feedback
What will be the output of the following code ?
#include <iostream>
using namespace std;

int func(int num){
    return func(num- 1);
}

int main() {
    int num = 5;
    int ans = func(num - 1);
    cout << ans;
}
#############################################################################################################################
ouput:
Runtime Error
#########################################################
because this will run the infinite loop.
##############################################################################################################################
What is the output
Send Feedback
What will be the output ?
#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    cout << n << " ";
    print(n - 2);
}

int main() {
    int num = 5;
    print(num);
}
###################################################
ouput:
5 3 1
#################################################################################################################################
What is the output
Send Feedback
What will be the output of the following code ?
#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << “ “;
        return;
    }
    print(n --);
    cout << n << “ “;
}

int main() {
    int num = 3;
    print(num);
}
##################################################################
ouput:
run time error
############################################################################################################################
