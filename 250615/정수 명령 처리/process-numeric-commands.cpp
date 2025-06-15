#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int>s;
int N;
string command;
int x;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            s.push(x);
        }

        if (command == "size") {
            cout << s.size() << endl;
        }

        if (command == "empty") {
           cout << s.empty() << endl;
        }

        if (command == "pop") {
            cout << s.top() << endl;
            s.pop();
        }

        if (command == "top") {
            cout << s.top() << endl;
        }

    }
    
    return 0;
}
