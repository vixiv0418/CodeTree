#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command;

int main() {
    list<int>l;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command;
        int num;
        if (command == "push_front" ) {
            cin >> num;
            l.push_front(num);
        }
        else if (command == "push_back" ) {
            cin >> num;
            l.push_back(num);
        }
        else if (command == "pop_back" ) {
            cout<<l.back()<<endl;
            l.pop_back();
            
        }
        else if (command == "pop_front" ) {
            cout<<l.front()<<endl;
            l.pop_front();
        }
        else if (command == "front" ) {
            cout<<l.front()<<endl;
        }
        else if (command == "back" ) {
            cout<<l.back()<<endl;
        }
        else if (command == "size" ) {
            cout<<l.size()<<endl;
        }
        else if (command == "empty" ) {
            cout<<l.empty()<<endl;
        }
    }
    return 0;
}
