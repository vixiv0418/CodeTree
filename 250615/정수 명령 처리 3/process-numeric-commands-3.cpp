#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
string cmd;
int x;
deque<int> dq;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        if (cmd == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        if (cmd == "pop_front") {
            cout << dq.front() <<endl;
            dq.pop_front();
        }
        if (cmd == "pop_back") {
            cout << dq.back() <<endl;
            dq.pop_back();
        }
        if (cmd == "size") {
            cout << dq.size() << endl;
        }
        if (cmd == "empty") {
            cout << dq.empty() << endl;
        }
        if (cmd == "front") {
            cout << dq.front() << endl;
        }
        if (cmd == "back") {
            cout << dq.back() << endl;
        }
    }

    return 0;
}
