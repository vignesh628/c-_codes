Given a number n, put all elements from 1 to n in an array in order - 1,3,.......4,2.
Input Format :
 Integer n
Output Format :
 Elements of the array separated by space.
Sample Input 1 :
6
Sample Output 1 :
 1 3 5 6 4 2
Sample Input 2 :
9
Sample Output 2 :
 1 3 5 7 9 8 6 4 2
 
 #################################################code########################################################
 

void arrange(int arr[],int n){
 int l=1;
int m=2;
    
 for(int i=0;i<n/2;i++)
 {
     
     arr[i]=l;
     arr[n-i-1]=m;     
    l=l+2;
    m=m+2;
     
 }
    if(arr[n%2==1])
    {
    arr[n/2]=n;
    }


}
