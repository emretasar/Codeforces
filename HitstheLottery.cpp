#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n;
    cin >> n;
    int counter = 0;
    while(n){
        if(n >= 100){
            int hundreds = n / 100;
            counter += hundreds;
            n -= hundreds * 100;
        }
        else if(n >= 20){
            int twenties = n / 20;
            counter += twenties;
            n -= twenties * 20;
        }
        else if(n >= 10){
            int tens = n / 10;
            counter += tens;
            n -= tens * 10; 
        }
        else if(n >= 5){
            int fives = n / 5;
            counter += fives;
            n -= fives * 5;
        }
        else if(n >= 1){
            int ones = n;
            counter += ones;
            n -= ones;
        }
    }

    cout << counter << endl;
    return 0;
}
