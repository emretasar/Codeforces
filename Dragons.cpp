#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int s, n;
    cin >> s >> n;
    int strength[n], bonus[n];

    for(int i=0; i<n; i++)
        cin >> strength[i] >> bonus[i];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(strength[j] > strength[j+1]){
                int temp = strength[j];
                strength[j] = strength[j+1];
                strength[j+1] = temp;
                temp = bonus[j];
                bonus[j] = bonus[j+1];
                bonus[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(s > strength[i])
            s += bonus[i];
        else if(s <= strength[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    

    cout << "YES" <<endl;
    return 0;
}
