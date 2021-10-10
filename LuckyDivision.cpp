#include <bits/stdc++.h>
using namespace std;

bool isLucky(string data){
    for(int i=0; i<data.length(); i++){
        if(data[i] == '4' || data[i] == '7')
            continue;
        else
            return false; 
    }
    return true;
}

bool isAlmostLucky(string data){
    int decimal = stoi(data);
    for(int i=1; i<decimal; i++){
        if(decimal % i == 0){
            string str = to_string(decimal / i);
            if(isLucky(str))
                return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    
    if(isLucky(input))
        cout << "YES" << endl;
    else{
        if(isAlmostLucky(input))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
