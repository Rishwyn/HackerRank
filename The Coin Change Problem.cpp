#include <bits/stdc++.h>

using namespace std;
long count(int c[],int n,int t)
{
  long d[t+1];
  memset(d, 0, sizeof(d)); 
  d[0]=1;
  for(int i=0;i<n;i++)
   for(int j=c[i];j<=t;j++)
    d[j]+=d[j-c[i]];
  return d[t];   
}

int main()
{ int t,n,c[1000];
  cin>>t>>n;
  for(int i=0;i<n;i++)
   cin>>c[i];
   cout<<count(c,n,t);
   return 0;
}
