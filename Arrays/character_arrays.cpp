The way the implementation of the character arrays is different from the normnal arrays
#include<iostream>
using namespace std;
int main()
{
    char arr[]="vignesh";
    cout<<*arr<<endl;
    cout<<arr<<endl;
}
#################################################################################################################
output:
v
vignesh
###############################################################################################################
https://ide.geeksforgeeks.org/Ua9aUJ3iWA
##################################################################################################################
#include<iostream>
using namespace std;
void display(char arr[])
{
    cout<<arr<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    char arr[]="vignesh";
    display(arr);
    
    
}
####################################################################################################################
vignesh
v
i
g
n
e
s
h
####################################################################################################################
