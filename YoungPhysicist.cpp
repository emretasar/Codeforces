#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    int temp_x, temp_y, temp_z;
    for(int i=0; i<n; i++){
        cin >> temp_x >> temp_y >> temp_z;
        sum_x += temp_x;
        sum_y += temp_y;
        sum_z += temp_z;
    }
    
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
