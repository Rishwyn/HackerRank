#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
vector<int> a;
int m=n;
int count=0;
while(1)
{
    a.push_back(n%10);
    n=n/10;
    if(n<10)
    {
        a.push_back(n);
        break;
    }
}
vector <int>::iterator it;
    for(it = a.begin();it != a.end();++it)
    { if(*it==0)
         continue;
   else if(m%*it==0)
     count++;
} 
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
