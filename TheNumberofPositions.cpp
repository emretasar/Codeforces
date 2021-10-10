#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    int counter = 0;
    for(int i = a+1; i <= n; i++){
        if(n-i <= b)
            counter++;
    }
    cout << counter << endl;
    return 0;
}
