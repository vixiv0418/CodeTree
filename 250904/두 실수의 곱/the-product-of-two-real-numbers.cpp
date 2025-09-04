#include <iostream>
using namespace std;

int main() {
    int a = 5.26;
    int b = 8.27;

    cout<< fixed;
    cout.precision(3);

    cout<<a* b;
    return 0;
}