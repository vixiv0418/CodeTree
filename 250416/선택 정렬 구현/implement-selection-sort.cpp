#include <iostream>
using namespace std;

int n;
int arr[100];

void SelectionSort() {
    for(int i=0; i<n-1; i++) { // 비교 하는 값을 min으로 둠 
        int min =i;
        for(int j= i+1; j<n; j++) // i+1의 의미 = 이미 앞에는 정렬 되어 있으니 제외
            if(arr[min]>arr[j]) // 제일 작은 값의 인덱스를 찾아서 min에 넣는다.
                min = j;

        int tmp = arr[i]; //swap 원래 비교 하는 값과 제일 작은 값(min)과 교체
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SelectionSort();
    
    for (int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

