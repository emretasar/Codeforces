#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int counter = 0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        if(temp[1] == '+')
            counter++;
        else if(temp[1] == '-')
            counter--;
    }

    cout << counter << endl;
    return 0;
}
