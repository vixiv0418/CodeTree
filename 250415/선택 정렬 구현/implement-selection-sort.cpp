#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++) {
        int min =i;
        for(int j= i+1; j<n; j++)
            if(arr[min]>arr[j]) 
                min = j;
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    
    for (int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
