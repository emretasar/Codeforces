#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string input1, input2;
    cin >> input1;
    cin >> input2;
    int flag = 0;
    for(int i=0; i<input1.length(); i++){
        if(input1[i] <= 90)
            input1[i] += 32;
        if(input2[i] <= 90)
            input2[i] += 32;
        if(input1[i] == input2[i] || input1[i] == input2[i] + 32 || input1[i] + 32 == input2[i])
            continue;
        else if(input1[i] > input2[i]){
            flag = 1;
            break;
        }
        else if(input1[i] < input2[i]){
            flag = -1;
            break;
        }
    }

    cout << flag << endl;
   
    return 0;
}