#include <iostream>

#define MAX_N 100000
using namespace std;

int n;
int arr[MAX_N];
// 배열을 분할하고 피벗의 최종 위치를 반환
int partition(int low, int high) {
    int pivot = arr[high];  // 피벗은 보통 마지막 원소로 선택
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);  // 피벗을 중간으로 이동

    return i + 1;
}

// 퀵 정렬 함수 (재귀)
void quickSort(int low, int high) {
    if (low < high) {
        int pos = partition(low, high);

        quickSort(low, pos - 1);   // 왼쪽 부분 정렬
        quickSort(pos + 1, high);  // 오른쪽 부분 정렬
    }
}



int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
