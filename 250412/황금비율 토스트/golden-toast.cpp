#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string A;
    list<char> l;
    list<char>::iterator it;
    cin >> A;
    for(int i =0; i<n; i++) {
        l.push_back(A[i]);
        }
    it = l.end();
    char command;
    for(int i =0; i<m; i++) {
        cin >> command;
        if(command =='L') {
            if(it!=l.begin())
                it--;
        }
        else if(command =='R') {
            if(it!=l.end())
                it++;
        }
        else if(command =='D') {
            if(it!=l.end())
                it = l.erase(it);
        }
        else if(command =='P') {
            char s;
            cin >> s;
            l.insert(it,s);
        }
          

    }
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
    
    return 0;
}