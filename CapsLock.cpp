#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;

    int capital = 0, lowercase = 0;
    for(int i=0; i<input.length(); i++){
        if(input[i] >= 65 && input[i] <= 90)
            capital++;
        else 
            lowercase++;
    }

    if(capital == input.length()){
        for(int i=0; i<input.length(); i++)
            input[i] += 32;
        input[input.length()] = '\0';
    }

    else if(lowercase == 1 && (input[0] <= 122 && input[0] >= 97)){
        input[0] -= 32;
        for(int i=1; i<input.length(); i++)
            input[i] += 32;
        input[input.length()] = '\0';
    }
    
    cout << input << endl;
    
    return 0;
}
