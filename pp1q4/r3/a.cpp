#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;

    long long up = (long long)ceil(n);
    long long down = (long long)floor(n);

    cout << up << " " << down;
    return 0;
}