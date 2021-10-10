#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, counter = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int ones = 0, twos = 0, threes = 0, fours = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1)
            ones++;
        else if(arr[i] == 2)
            twos++;
        else if(arr[i] == 3)
            threes++;
        else
            fours++;
    }

    counter += fours;
    fours = 0;
    if(threes >= ones){
        counter += threes;
        threes = 0;
        ones = 0;
    }

    else if(threes < ones){
        counter += threes;
        ones -= threes;
        threes = 0;
    }

    if(twos % 2 == 0){
        counter += twos / 2;
        twos = 0;
    }

    else if(twos % 2 != 0 && twos > 1){
        counter += twos / 2;
        twos = 1;
    }

    if(twos == 1){
        if(ones >= 2){
            counter += 1;
            ones -= 2;
            twos = 0;
        }
        else if(ones == 1){
            counter += 1;
            ones -= 1;
            twos = 0;
        }
        else if(ones == 0){
            counter++;
            twos--;
        }
    }

    counter += ones / 4;
    ones = ones % 4;
    if(ones != 0)
        counter += 1;
    ones = 0;

    cout << counter << endl;


return 0;
}



    
