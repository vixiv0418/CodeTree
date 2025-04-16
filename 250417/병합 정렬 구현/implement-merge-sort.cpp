#include <iostream>
#define MAX_N 100000
using namespace std;

int n;
int arr[MAX_N];
int merged_arr[MAX_N];

void merge(int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) 
            merged_arr[k++] = arr[i++];
        else 
            merged_arr[k++] = arr[j++];
    }

    while (i <= mid)
        merged_arr[k++] = arr[i++];

    while (j <= high)
        merged_arr[k++] = arr[j++];

    for (int idx = low; idx <= high; idx++) {
        arr[idx] = merged_arr[idx];
    }
}

void merge_sort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
