#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char a, b;
    cin >> a >> b;

    int ca = 0, cb = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == a) ca++;
        if (s[i] == b) cb++;
    }

    cout << ca << " " << cb << "\n";
    if (ca > cb) cout << "Yes";
    else         cout << "No";

    return 0;
}