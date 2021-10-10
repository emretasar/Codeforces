#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int remain = n;
    int day = 0;
    for(remain; remain>0; remain--){
        if(++day % m == 0)
            remain++;
    }

    cout << day << endl;
    
    return 0;
}
