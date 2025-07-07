#include <iostream>
using namespace std;

int main() {
    int array1 [3][3] ={0,};
    for (int i=0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cin >> array1[i][j];
            cout << 3* array1[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}