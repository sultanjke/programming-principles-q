#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int cnt = 0;
    while (n > 0) {
        n = n / 2;
        cnt++;
    }

    cout << cnt;
    return 0;
}