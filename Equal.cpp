#include <bits/stdc++.h>
#include <climits>

using namespace std;

vector<string> split_string(string);
int diff(int n)
{
    int count=0;
    if(n>5)
    {
        count=n/5;
        n=n%5;
    }
    if(n==3||n==4)
    count+=2;
    if(n==2||n==1||n==5)
    count+=1;
    return count;
}
int equal(vector<int> arr) {
 sort(arr.begin(),arr.end());

 int len=arr.size()-1;
int minc=INT_MAX;
 for(int min=0;min<4;min++)
 {  
    int c=0;
 for(int i=0;i<=len;i++)
 {
   
   c+=diff(arr[i]-arr[0]+min);
 }
 if(minc>c)
 minc=c;
 }
 return minc;

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

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        int result = equal(arr);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
