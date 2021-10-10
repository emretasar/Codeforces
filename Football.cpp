#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int counterZero = 0, counterOne = 0; 
    for(int i=0; i<input.length(); i++){
        if(input[i] == '0'){
            counterZero++;
            counterOne = 0;
        }
        else if(input[i] == '1'){
            counterOne++;
            counterZero = 0;
        }

        if(counterZero >= 7 || counterOne >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
