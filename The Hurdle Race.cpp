#include <iostream>
using namespace std;
int main()
{
    int n,k,a[1000],big;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0)
            big=a[i];
        else if(big<a[i])
            big=a[i];
    }
    if(k>big)
        cout<<"0";
    else
        cout<<(big-k);
    return 0;
}
