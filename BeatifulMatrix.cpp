#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5][5];
    int tempi, tempj;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                tempi = i;
                tempj = j;
            }
        }    
    }

    cout << abs(2 - tempj) + abs(2 - tempi) << endl;
    
    return 0;
}
