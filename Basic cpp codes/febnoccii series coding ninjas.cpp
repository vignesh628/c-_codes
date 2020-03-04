Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
Input Format :
Integer N
Output Format :
true or false

############################################code################################################

bool checkMember(int n){

  
    int arr[n]{0};
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]==n)
        {
            return true;
        }
    }
    return false;

}
