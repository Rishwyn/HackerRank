#include <iostream>
using namespace std;
int main()
{ float s,t,a,b,ap[1000000],o[100000],c_ap=0,c_or=0;
  long int m,n;
  cin>>s>>t>>a>>b>>m>>n;
  while(m--)
  {
      cin>>ap[n];
      if(((a+ap[n])<=t)&&((a+ap[n])>=s))
         c_ap++;
  }
  while(n--)
  {
      cin>>o[n];
      if(((b+o[n])<=t)&&((b+o[n])>=s))
         c_or++;
  }
  cout<<c_ap<<endl<<c_or;
 
   return 0; 
}
