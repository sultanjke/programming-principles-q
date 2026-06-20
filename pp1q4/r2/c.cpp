#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    char first = s[0];
    int cnt = 0;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == first) cnt++;
    }

    if (cnt >= 2) cout << "YES ";
    else          cout << "NO ";

    cout << cnt;
    return 0;
}