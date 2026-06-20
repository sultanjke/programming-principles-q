#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int firstEven = 0, lastEven = 0;
    bool found = false;

    for (int x : a) {
        if (x % 2 == 0) {
            if (!found) firstEven = x;
            lastEven = x;
            found = true;
        }
    }

    if (!found) {
        cout << 0 << " " << 0;
    } else {
        cout << firstEven << " " << lastEven;
    }

    return 0;
}