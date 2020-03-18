#we will only pass the base address of the array to the function.
#include<iostream>
using namespace std;
void display(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
     display(arr,5);
}
##############################################################################################################
output:
1
2
3
4
5
##############################################################################################################
https://ide.geeksforgeeks.org/CveSnvjXTc
##############################################################################################################
printing the arr will print the starting adddress of array.
#################################################################################################################
i[arr] instead of arr[i]
#include<iostream>
using namespace std;
void display(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<i[arr]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    // cout<<arr<<endl;
    display(arr,5);
}
###############################################################################################################
output:
1
2
3
4
5
################################################################################################################
Passing the array as pointer:
#include<iostream>
using namespace std;
void display(int *arr,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    display(arr,5);
}
###############################################################################################################
output:
1
2
3
4
5
#################################################################################################################
https://ide.geeksforgeeks.org/WIut1noD9d
####################################################################################################################






