#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    bool sorted = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do { 
        sorted = true;
        for (int i=0; i<n-1; i++) {
            for (int j=0; j<n-1-i; j++) {
                if (arr[j]> arr[j+1]) {
                    int tmp = arr[j];
                    arr [j] = arr[j+1];
                    arr [j+1] = tmp;
                }
            }
        }
    } while (!sorted);
    for (int i =0; i<n; i++) {
        cout<< arr[i]<<" ";
    }

    return 0;
}
