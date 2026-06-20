#include <iostream>
#include <vector>
using namespace std;

int smallestPositive(const vector<long long>& v) {
    long long res = -1;
    for (long long x : v)
        if (x > 0 && (res == -1 || x < res))
            res = x;
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << smallestPositive(v);
    return 0;
}
