#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char ch;
    cin >> ch;

    int count = 0;
    for (char c : s) {
        if (c > ch) count++;
    }

    cout << count;

    return 0;
}