#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin >> arr[i];

    long long sum = 0;
    int pos = 1;
    for(int i=0; i<m; i++){
        if(arr[i] >= pos){
            sum += arr[i] - pos;
            pos = arr[i];
        }

        else if(arr[i] < pos){
            sum += n - (pos - arr[i]);
            pos = arr[i];
        }
    }

    cout << sum << endl; 
    return 0;
}
