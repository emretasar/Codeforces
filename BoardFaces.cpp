#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long int t, n, i, j, result;
    cin >> t;
    unsigned long long int array[t] = {0};
    for(i=0; i<t; i++){
        cin >> n;
        result = 0;
        for(j=1; j<=n/2; j++)
            result += j * (j * 8);
        array[i] = result;
    }

    for(int i=0; i<t; i++)
        cout << array[i] << endl;
    return 0;
}
