#include <iostream>

using namespace std;

int n;
int arr[100];

void BubbleSort() {
    bool sorted = true;

    do { 
        sorted = true;
        for (int i=0; i<n-1; i++) {
                if (arr[i]> arr[i+1]) {
                    int tmp = arr[i];
                    arr [i] = arr[i+1];
                    arr [i+1] = tmp;
                    sorted = false;
                }
            }
    } while (!sorted);
}
int main() {
    cin >> n;
  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    BubbleSort();

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
