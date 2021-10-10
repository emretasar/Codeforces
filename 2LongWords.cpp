#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i].length() <= 10)
            cout << arr[i] << endl;
        else if(arr[i].length() > 10)
            cout << arr[i][0] << arr[i].length() - 2 << arr[i][arr[i].length()-1] << endl;
        
    }
    return 0;
}
