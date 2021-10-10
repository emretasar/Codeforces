#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    int result;

    result = (a + b) + c;
    if(((a + b) * c) > result)
        result = (a + b) * c;
    if(((a * b) + c) > result)
        result = (a * b) + c;
    if(((a * b) * c) > result)
        result = (a * b) * c;
    if((a + (b + c)) > result)
        result = a + (b + c);
    if((a + (b * c)) > result)
        result = a + (b * c);
    if((a * (b + c)) > result)
        result = a * (b + c);
    if((a * (b * c)) > result)
        result = a * (b * c);
    
    cout << result << endl;
    return 0;
}
