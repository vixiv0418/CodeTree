#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue<int> q;

int main() {
    cin >> N >> K;
    for (int i =1; i<=N; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        for (int j =1; j <= K-1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front() << " ";

    return 0;
}
