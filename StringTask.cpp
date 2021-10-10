#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input, output;
    cin >> input;
    for(int i=0; i<input.length(); i++){
        if(input[i] <= 90)
            input[i] += 32;
        if(input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i')
            continue;
        else{
            output.push_back('.');
            output.push_back(input[i]);
        }
    }

    cout << output << endl;
    return 0;
}
