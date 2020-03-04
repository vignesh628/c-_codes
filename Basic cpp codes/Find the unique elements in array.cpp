Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Note : Given array will always contain odd number of elements.
Input format :
Line 1 : Array size i.e. 2N+1
Line 2 : Array elements (separated by space)
Output Format :
Unique element present in the array
Constraints :
1 <= N <= 10^3
Sample Input :
7
2 3 1 6 3 6 2
Sample Output :
1
##############################################code############################################
#include<iostream>
#include <algorithm>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}
int FindUnique(int * arr, int size)
{
    
    int arr1[size]{0};
    for(int i=0;i<=size;i++)
    {
        int count=0;
        for(int j=0;j<=size;j++)
        {
            if(i!=j && arr[i]==arr[j] )
            {
                count=count+1;
                arr1[i]=count;
            }
        }
    }
    for(int i=0;i<=size;i++)
    {
        if(arr1[i]==0)
        {
            return arr[i];
        }
    }
    
}
