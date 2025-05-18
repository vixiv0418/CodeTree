#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack<char>s;

int main() {
    cin >> str;
    for (int i =0; i<str.size(); i++) {
        if (str[i]=='(')
            s.push(str[i]);
        else {
            if (s.empty()==1) {
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()==1)
        cout << "Yes";
    else
        cout << "No";

    

    return 0;
}
