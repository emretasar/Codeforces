#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int test;
    cin >> test;
    int results[test] = {0};
    for(int i=0; i<test; i++){
        int x, n, m;
        cin >> x >> n >> m;
        while(x > 20 && n != 0){
            x = x / 2 + 10;
            n--;
        }
        for(int j=0; j<m; j++)
            x -= 10;
        if(x <= 0)
            results[i] = 1;
    }

    for(int i=0; i<test; i++){
        if(results[i] == 0)
            cout << "NO" << endl;
        else if(results[i] == 1)
            cout << "YES" << endl;
    }
    return 0;
}
