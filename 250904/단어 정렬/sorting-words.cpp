#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int n;
string word[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }

    sort(word,word+n);
    for (int i = 0; i<n; i++) {
        cout<< word[i]<<" ";
    }
    cout<< endl;
    sort(word,word+n,greater<string>()) 
    for (int j =0; j<n; j++) {
        cout<<word[i]<<" ";
    }
    return 0;
}