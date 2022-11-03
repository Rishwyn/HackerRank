#include <iostream>
#include <math.h>
using namespace std;
int pickingNumbers(int A[],int N)
{   int count,big=0;
 
    for(int i=0;i<N;i++)
    {   count=0;
        for(int j=0;j<N;j++)
        {
            if((abs(A[i]-A[j])<=1)&&(A[i]>=A[j]))
                count++;
        }
        if(big<count)
            big=count;
    }
 return big;
}
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<pickingNumbers(a,n);
    return 0;
}
