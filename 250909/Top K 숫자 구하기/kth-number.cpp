#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,K;
    int arr[100];
    cin>>N>>K;
    for (int i=0; i<N; i++) {
        cin>>arr[i];
    }    
    sort(arr,arr+N);
    cout<<arr[K-1];
    return 0;
}