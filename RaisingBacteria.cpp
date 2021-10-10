#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int counter = 0;
    int x;
    cin >> x;

    while(x){
        if(x % 2 == 1)
            counter++;
        x /= 2;
    }

    cout << counter << endl;
    return 0;
}
