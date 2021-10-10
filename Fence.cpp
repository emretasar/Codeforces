#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int* array = new int[n];
    int* sum = new int[n-k+1];
    for(int i=0; i<n; i++)
        cin >> array[i];

    int index = 0;
    int min;
    for(int i=0; i<= n-k; i++){
        int total = 0;
        for(int j=i; j<k+i; j++)
            total += array[j];
        sum[i] = total;
        if(i == 0)
            min = sum[i];
        if(sum[i] == k){
            cout << i+1 << endl;
            return 0;
        }
        if(sum[i] < min){
            index = i;
            min = sum[index];
        }
    }

    cout << index+1 << endl;
    delete[] array;
    delete[] sum;
    return 0;
}
