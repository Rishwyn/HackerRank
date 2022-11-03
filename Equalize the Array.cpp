#include <iostream>
using namespace std;
int main()
{
    int n,arr[1000],count,big=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {   count=0;
     
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
       if(big<count)
           big=count;
    }
    cout<<(n-big);
    return 0;
}
