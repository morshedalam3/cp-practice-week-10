#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ar(n, vector<int>(n, 0));

    int a, b, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a = i;
        b = i;
        int y = x;
        while (x--) {
            ar[a][b] = y;
            if (b != 0 && ar[a][b - 1] == 0) b--;
            else a++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << ar[i][j] << " ";
        cout << endl;
    }

    return 0;
}
