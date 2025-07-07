#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    int array1[10][10];
    int array2[10][10];
    for (int i =0; i <a; i++) {
        for (int j = 0; j<b; j++) {
            cin >> array1[i][j];
        }
    } 
    for (int i =0; i <a; i++) {
        for (int j = 0; j<b; j++) {
            cin >> array2[i][j];
        }
    } 
    for (int i =0; i <a; i++) {
        for (int j = 0; j<b; j++) {
            if (array1[i][j] == array2[i][j])
                cout <<"0"<<" ";
            else
                cout<<"1"<<" ";
        }
        cout <<endl;
    } 

    return 0;
}