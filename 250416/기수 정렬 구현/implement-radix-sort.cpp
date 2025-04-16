#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000]; //제한 조건 원소 값<= 100,000

void Radix_Sort() {
    int pos = 1; //digit을 구할 때, 자리수로 나눠야 하기 때문에 pos 선언
    for (int p = 0; p<6; p++) { // 최대 자리수인 10만 즉, 6번째 자리수까지 나타내기 위해
        vector<int> arr_new[10]; // 벡터 배열을 각 자리수에 대해 집어 넣을 때마다 초기화
        for(int i =0; i<n; i++) {
            int digit = (arr[i] / pos) % 10; // digit 자리수의 값을 즉 벡터 배열의 인덱스 값에 맞춤
            arr_new[digit].push_back(arr[i]); // 벡터 배열의 인덱스 값에 맞춰서 원소 값 넣음
        }
        int index = 0; 
        for(int i =0; i<10; i++) { // digit을 나타냄
            for(int j =0; j<arr_new[i].size(); j++) //arr_new[i].size()는 각 digit 값에 들어있는 원소들의 개수
                arr[index++]=arr_new[i][j]; // arr에 차례로 벡터 배열에 정렬된 값을 넣음
        }
        pos *= 10; // 각 자리수를 구해야하므로 10씩 곱해줌
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Radix_Sort();

    for(int i =0; i<n; i++) 
        cout<< arr[i]<<" ";
    return 0;
}

