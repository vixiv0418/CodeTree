#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int output = 0;
    for(int i = 1; i<=n; i++) {
        for(int j =0; j<i; j++) {
            output ++;
            cout << output << " ";
        }
        cout << endl;
    }
    return 0;
}