#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[10000], B[10000], C[10000];

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) cin >> C[i];

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == B[i] && B[i] == C[i]) {
            count++;
        }
    }

    cout << count;
    return 0;
}