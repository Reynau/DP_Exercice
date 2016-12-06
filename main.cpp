#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long ul;

int main() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    vector<int> D((ul)n + 1);
    vector<int> P((ul)n + 1, -1);
    vector<int> M((ul)n + 1, -1);

    // Get Input
    cout << "Introduce d1..d" << n << endl;
    D[0] = 0;
    for (int i = 1; i < D.size(); ++i)
        cin >> D[i];

    // Precomputes P[i]
    P[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (abs(D[i]) <= i && abs(D[n] - D[i]) <= n - i) {
            for (int j = 0; j < i; ++j) {
                if (abs(D[j]) <= j && abs(D[i] - D[j]) + abs(D[j] - D[0]) <= i)
                    P[i] = j;
            }
        }
    }

    // Bottom-Top DP
    M[0] = 0;
    for (int i = 1; i < M.size(); ++i) {
        if (P[i] != -1)
            M[i] = max(M[P[i]] + 1, M[P[P[i]]]);
    }

    // List Solution
    int i = n;
    while (i > 0) {
        if (M[P[i]] + 1 > M[P[P[i]]]) {
            cout << i << " ";
            i = P[i];
        }
        else P[P[i]];
    }
    cout << endl;

    return 0;
}