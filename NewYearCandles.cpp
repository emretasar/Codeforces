#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int total = 0, remainder = 0;
    
    total += a;
    while(a / b){
        remainder = 0;
        total += (a / b);
        remainder += a % b;
        a = (a / b) + remainder;
    }

    cout << total << endl;
    return 0;
}
