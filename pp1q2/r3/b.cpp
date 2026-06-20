#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] /= 2;
        else
            arr[i] = arr[i] * 3 + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " "; 
    }

    return 0;
}