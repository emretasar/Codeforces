#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int counter = 0;
    for(int a=0; a<input.length(); a++){
        if(input[a] == 'h' && counter == 0){
            counter++;
            continue;
        }
        else if(input[a] == 'e' && counter == 1){
            counter++;
            continue;
        }
        else if(input[a] == 'l' && (counter == 2 || counter == 3)){
            counter++;
            continue;
        }
        else if(input[a] == 'o' && counter == 4){
            counter++;
            break;
        }
    }

    if(counter == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}
