#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> even, odd;
    long long x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    for (long long v : even) cout << v << " ";
    cout << "\n";
    for (long long v : odd) cout << v << " ";

    return 0;
}
