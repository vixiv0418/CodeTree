#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin >> n;
    int array [n][n];
    for (int i = 0; i<n; i++) {
        if (i % 2==0) {
            for (int j =0; j<n; j++) {
                array[i][j] = j+1;
            }
        }
        else {
            for (int j =n-1; j>=0; j--) {
                array[i][j] = cnt;
                cnt++;
            }
            cnt=1;
        }
        for (int j = 0; j <n; j++) {
            cout<< array[i][j];
        }
        cout<<endl;
    }
    return 0;
}