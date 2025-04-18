#include <iostream>
using namespace std;

#define MAX_N 100000

int n;
int arr[MAX_N];


void heapify(int n, int i) {
    int largest = i;         // 루트를 가장 큰 값으로 가정
    int l = 2 * i + 1;       // 왼쪽 자식
    int r = 2 * i + 2;       // 오른쪽 자식

    // 왼쪽 자식이 더 크면
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // 오른쪽 자식이 더 크면
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // 가장 큰 값이 루트가 아니면 교환 후 재귀 호출
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(n, largest);
    }
}

// 힙 정렬
void heapsort() {
    // 1. 배열을 max-heap으로 만듦 
    for (int i = n / 2; i >= 1; i--)
        heapify(n, i);

    // 2. 루트(가장 큰 값)를 맨 뒤로 보내고 heapify 반복
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);     // 최대값을 맨 뒤로 보냄
        heapify(i-1, 1);            // 남은 부분 다시 heapify
    }
}

int main() {
    
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    heapsort();
    
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    
    return 0;
}






