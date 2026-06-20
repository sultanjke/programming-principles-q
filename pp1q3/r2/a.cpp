#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;

    getline(cin, s);
    cin >> c;

    string part = "";
    for (char x : s) {
        if (x == c) {
            cout << part << " ";
            part = "";
        } else {
            part += x;
        }
    }

    cout << part;

    return 0;
}
