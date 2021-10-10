#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int array[t] = {0};
    for(int i=0; i<t; i++){
        stack<char> stack;
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            char temp;
            cin >> temp;
            if(temp == '(')
                stack.push(temp);
            else if(temp == ')' && stack.size() == 0)
                stack.push(temp);
            else if(temp == ')' && stack.top() != '(')
                stack.push(temp);
            else if(temp == ')' && stack.top() == '(')
                stack.pop();
        }
        array[i] = stack.size() / 2;
    }

    for(int i=0; i<t; i++)
        cout << array[i] << endl;
    
    return 0;
}
