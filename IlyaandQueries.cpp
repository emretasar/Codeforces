#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int m;
    cin >> m;
    int* result = new int[m]{0};
    int* left = new int[m];
    int* right = new int[m];
    for(int i=0; i<m; i++){
        cin >> left[i] >> right[i];
    }

    int counter1 = 0;
    int flag = 0;
    for(int i=0; i<input.length()-1; i++){
        if(input[i] == input[i+1]){
            counter1++;
            flag = 1;
            break;
        }
    }

    if(counter1 == input.length()){
        for(int i=0; i<m; i++)
            cout << right[i] - left[i] << endl;
        return 0;
    }
    
    if(flag == 0){
        for(int i=0; i<m; i++)
            cout << result[i] << endl;
        return 0;
    }
    
    for(int i=0; i<m; i++){
        int counter2 = 0;
        for(int j=left[i]-1; j<right[i]-1; j++){
            if(input[j] == input[j+1])
                counter2++;
        }
        result[i] = counter2;
    }


    for(int i=0; i<m; i++)
        cout << result[i] << endl; 

    delete[] result;
    delete[] left;
    delete[] right;
    return 0;
}
