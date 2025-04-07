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
        
        if (command == "push_front" ) {
            int num;
            cin >> num;
            l.push_front(num);
        }
        if (command == "push_front" ) {
            int num;
            cin >> num;
            l.push_front(num);
        }
        if (command == "push_front" ) {
            int num;
            cin >> num;
            l.push_front(num);
        }
    }

 

    return 0;
}
