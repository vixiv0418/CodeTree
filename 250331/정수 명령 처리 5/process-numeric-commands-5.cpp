#include <iostream>
#include <vector>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    vector<int> v;
    v.push_back(num[0]);
    v.push_back(num[1]);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v.size()<<endl;


    

    return 0;
}
