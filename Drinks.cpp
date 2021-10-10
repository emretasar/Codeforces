#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    float mixSum;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mixSum += arr[i];
    }

    cout << mixSum / n  << endl;
    
    return 0;
}
