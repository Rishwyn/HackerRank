#include <iostream>
using namespace std;
int main()
{ int t,n,k,a[1000],count;
  cin>>t;
  while(t--)
  {   count=0;
      cin>>n>>k;
      for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]<=0)
              count++;
          
      }
   if(count>=k)
       cout<<"NO"<<endl;
   else
       cout<<"YES"<<endl;
      
  }
    return 0;
}
