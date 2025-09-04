#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums,nums+4);
    for (int i =0; i<n; i++) {
        cout<< nums[i]<<" ";
    }
    cout<<endl;
    sort(nums,nums+4,greater<int>());
    for (int j=0; j<n; j++) {
        cout<< nums[j]<<" ";
    }
    return 0;
}
