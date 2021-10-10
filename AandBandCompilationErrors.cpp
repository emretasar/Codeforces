#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int* array1 = new int[n];
    int* array2 = new int[n-1];
    int* array3 = new int[n-2];
    int* result = new int[2];
    for(int i=0; i<n; i++)
        cin >> array1[i];
    for(int i=0; i<n-1; i++)
        cin >> array2[i];
    for(int i=0; i<n-2; i++)
        cin >> array3[i];

    sort(array1, array1 + n);
    sort(array2, array2 + n-1);
    sort(array3, array3 + n-2);
    
    for(int i=0; i<n; i++){
        if(array1[i] != array2[i]){
            result[0] = array1[i];
            break;
        }
    }

    for(int i=0; i<n-1; i++){
        if(array2[i] != array3[i]){
            result[1] = array2[i];
            break;
        }
    }

    for(int i=0; i<2; i++)
        cout << result[i] << endl;
    return 0;
}
