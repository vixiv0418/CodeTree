#include <iostream>
using namespace std;

int array1 [3][3];
int array2 [3][3];
int main() {
    for (int i = 0; i <3; i++) {
        for (int j = 0; j<3; j++) {
            cin >> array1[i][j];
        }
    }

    for (int i = 0; i <3; i++) {
        for (int j = 0; j<3; j++) {
            cin >> array2[i][j];
        }
    }

    for (int i = 0; i <3; i++) {
        for (int j = 0; j<3; j++) {
            cout << array1[i][j] * array2[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}