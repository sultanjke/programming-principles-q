#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    long long k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        long long p = a[i] * k;
        int ans = (int)p;
        cout << ans << " ";
    }

    return 0;
}