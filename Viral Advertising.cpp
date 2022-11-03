#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,start=5,like,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        like=floor(start/2);
        start=3*like;
        sum+=like;
    }
    cout<<sum;
}
