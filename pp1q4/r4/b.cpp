#include <iostream>
using namespace std;

int main() {
    long long days, hours, minutes, seconds;
    cin >> days >> hours >> minutes >> seconds;

    long long total = days * 24 * 60 * 60
                    + hours * 60 * 60
                    + minutes * 60
                    + seconds;

    cout << total;
    return 0;
}
