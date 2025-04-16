#include <iostream>
using namespace std;

#define MAX_N 100

int n;
int arr[MAX_N];
void InsertionSort() {
    for(int i = 1; i<n; i++) {
        int key = arr[i]; // 원래 key값을 기억
        int j =i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1]=key; // key값을 올바른 위치에 삽입
        }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    InsertionSort();
    
    for(int i = 0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    return 0;
}
