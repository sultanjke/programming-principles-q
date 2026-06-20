#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    long long ra = (long long)round(a);
    long long rb = (long long)round(b);

    cout << ra + rb;
    return 0;
}