#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    string result = "";
    for (int i = 0; i < (int)s.size(); i++) {
        if ( (i + 1) % k != 0 ) {
            result += s[i];
        }
    }

    cout << result;
    return 0;
}