#include <iostream>
using namespace std;

#define MAX_N 100000

int n;
int arr[MAX_N];

// heapify 함수 (최대 힙 기준)
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
void heapSort() {
    // 1. 배열을 최대 힙으로 만듦 (build heap)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(n, i);

    // 2. 루트(가장 큰 값)를 맨 뒤로 보내고 heapify 반복
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);     // 최대값을 맨 뒤로 보냄
        heapify(i, 0);            // 남은 부분 다시 heapify
    }
}

int main() {
    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // 힙 정렬 수행
    heapSort();

    // 출력
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}






