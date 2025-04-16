#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000];

void Radix_Sort() {
    int pos = 1;
    for (int p = 0; p<6; p++) {
        vector<int> arr_new[10];
        for(int i =0; i<n; i++) {
            int digit = (arr[i] / pos) % 10;
            arr_new[digit].push_back(arr[i]);
        }
        int index = 0;
        for(int i =0; i<10; i++) {
            for(int j =0; j<arr_new[i].size(); j++) 
                arr[index++]=arr_new[i][j];
        }
        pos *= 10;
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

