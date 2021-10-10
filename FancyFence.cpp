#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int* arr = new int[t];
    for(int i=0; i<t; i++){
        int degree;
        cin >> degree;
        if((360 % (180 - degree)) == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }

    for(int i=0; i<t; i++){
        if(arr[i] == 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    delete[] arr;
    return 0;
}
