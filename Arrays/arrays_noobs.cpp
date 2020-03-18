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
####################################################################################################
output:
vignesh babu
vignesh babu
12
12
#####################################################################################################################################
Calcualte the size of the array as :
#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    int arr1[]={1,2,3,4,5};
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    
}
#####################################################################################################################################
output:
5
#####################################################################################################################################
    
