#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &c : s)
        if (c >= '0' && c <= '9') c = '#';

    cout << s;
    return 0;
}
