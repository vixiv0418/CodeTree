#include <iostream>
using namespace std;

int main() {
    int array[4][4];
    int total;
    for (int i =0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> array[i][j];
            total += array[i][j];
        }
        cout<<total<<endl;
        total =0;
    }
    return 0;
}