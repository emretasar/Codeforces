#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    cin >> n >> t;
    if(t == 10){
        if(n == 1){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<n-1; i++){
                cout << 1;
            }
            cout << 0 << endl;
        }
    }
    else{
        for(int i=0; i<n; i++){
            cout << t;
        }
        cout << endl;
    }
    return 0;
}
