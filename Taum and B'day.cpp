#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b,w,bc,wc,z,t;
    cin>>t;
    while(t--)
    {
        cin>>b>>w>>bc>>wc>>z;
        if(abs(bc-wc)<z)
        {
            cout<<b*bc+w*wc<<endl;
        }
        else
        {
            if(bc<wc)
             cout<<bc*b+(bc+z)*w<<endl;
             else
             cout<<wc*w+(wc+z)*b<<endl;
        }
    }
}
