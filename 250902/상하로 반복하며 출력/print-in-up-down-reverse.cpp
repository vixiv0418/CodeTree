#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >>n;
    vector<vector<int>> array(n, vector<int>(n,0));

    int cnt=1;

    for (int j =0; j<n; j++) {
        if (j%2==0) 
            for (int i = 0; i <n; i++) 
                array [i][j] = i+1;
        
        else {
            for (int i =n-1; i>=0; i--) {
                array [i][j] = cnt;
                cnt ++;
            }
            cnt =1;
        }
    }
    for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout << array[i][j];
            }
            cout<<endl;
        }
    return 0;
}