#include <iostream>

using namespace std;

int n;
int arr[100];

void BubbleSort() {
    bool sorted = true;

    do { 
        sorted = true; 
        for (int i=0; i<n-1; i++) {
                if (arr[i]> arr[i+1]) { // 값 비교
                    int tmp = arr[i]; //swap
                    arr [i] = arr[i+1];
                    arr [i+1] = tmp;
                    sorted = false; // swap 시 false
                }
            }
    } while (!sorted); // 이미 정렬된 배열이면 true로 한번만 for문 돌면 되게 하려고 O(N)
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
