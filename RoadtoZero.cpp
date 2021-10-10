#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long int t, x, y, a, b;
    cin >> t;
    unsigned long long int array[t] = {0};
    for(int i=0; i<t; i++){
        cin >> x >> y;
        cin >> a >> b;
        if(x > y){
            unsigned long long int result = y * b + (x-y) * a;
            if((x+y) * a < result)
                result = (x+y) * a; 
            array[i] = result;
        }
        else if(x <= y){
            unsigned long long int result = x * b + (y-x) * a;
            if((x+y) * a < result)
                result = (x+y) * a; 
            array[i] = result;
        }
    }

    for(int i=0; i<t; i++)
        cout << array[i] << endl;
    
    return 0;
}
