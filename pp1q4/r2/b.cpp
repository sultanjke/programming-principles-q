    #include <iostream>
    #include <cmath>
    using namespace std;

    int main() {
        long long a;
        long long b;
        cin >> a >> b;

        long long cube = a * a * a;
        double root = sqrt((double)b);

        cout << cube << " " << root;
        return 0;
    }