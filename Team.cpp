#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c;
    int counter = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a + b + c >= 2)
            counter++;
    }
    cout << counter << endl;
    return 0;
}
