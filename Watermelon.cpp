#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int w;
    cin >> w;

    if(w % 2 == 0){
        if(w/2 >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
