#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    long long m, n, a;
    long long leastFlagstone;
    cin >> m >> n >> a;
    if(m % a == 0 && n % a == 0)
        leastFlagstone = (m / a)  * (n / a);
    else if(m % a != 0 && n % a == 0)
        leastFlagstone = (m / a + 1) * (n / a);
    else if(m % a == 0 && n % a != 0)
        leastFlagstone = (m / a) * (n / a + 1);
    else 
        leastFlagstone = (m / a + 1) * (n / a + 1);


    cout << leastFlagstone << endl;
    return 0;
}
