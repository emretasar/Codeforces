#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, n;
    cin >> n >> k;
    
    int arr[n]; 
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int counter = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0)
            counter++;
    }
    
    cout << counter << endl;
    return 0;
}
