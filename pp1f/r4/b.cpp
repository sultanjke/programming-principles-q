#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long prev, cur;
    int rises = 0;

    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> cur;
        if (cur > prev) rises++;
        prev = cur;
    }

    cout << rises;
    return 0;
}
