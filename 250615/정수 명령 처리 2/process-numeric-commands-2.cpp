#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command;
int x;
queue<int> q;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            q.push(x);
        }
        if (command == "front") {
            cout << q.front() << endl;
        }
        if (command == "pop") {
            cout << q.front() << endl;
            q.pop();
        }
        if (command == "size") {
            cout << q.size() <<endl;
        }
        if (command == "empty") {
            cout << q.empty() <<endl;
        }
    }
    return 0;
}