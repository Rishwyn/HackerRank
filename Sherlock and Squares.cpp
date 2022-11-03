#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    { int n,count=0;
    cin>>a>>b;
    for(int i=1;i*i<=b;i++)
    { n=pow(i,2);
     if(n>=a&&n<=b)
         count++;
} cout<<count<<endl;
    } 
return 0;}
