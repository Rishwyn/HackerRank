#include<iostream>
using namespace std;
int main()
{
    int h,m,s;
    char a,b,c,d;
    cin>>h>>a>>m>>b>>s>>c>>d;
     
    if(c=='P'&&d=='M')
    { if(h==12)
    {cout<<"12";}
     else{
        cout<<12+h;
     }
    }
    else 
    { if(h==12)
        cout<<"00";
       else 
         cout<<"0"<<h;}
    cout<<a;
    if(m<10)
        cout<<"0"<<m;
    else
        cout<<m;
    cout<<b;
    if(s<10)
        cout<<"0"<<s;
    else
        cout<<s;

    
}
