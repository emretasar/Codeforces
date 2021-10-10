#include <bits/stdc++.h>
using namespace std;

bool Evennes(int data){
    if(data % 2 != 0)
        return false;
    else
        return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr[i] = Evennes(temp);
    }

    int numZero = 0, numOne = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0)
            numZero++;
        else if(arr[i] == 1)
            numOne++;
    }

    for(int i=0; i<n; i++){
        if(numZero == 1){
            if(arr[i] == 0){
                cout << i+1 << endl;
                break;
            }
        }
        else if(numOne == 1){
            if(arr[i] == 1){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
