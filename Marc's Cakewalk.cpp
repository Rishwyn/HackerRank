#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int a[100],n,sum=0;
    cin>>n;
    for(long int i=0;i<n;i++)
        cin>>a[i];
    for(long int i=0;i<n;i++)
        for(long int j=i+1;j<n;j++)
            if(a[i]<a[j]){
                long int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    for(long int i=0;i<n;i++)
        sum+=pow(2,i)*a[i];
    cout<<sum;
}
