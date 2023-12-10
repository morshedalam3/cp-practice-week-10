#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, mx, g, ans;

    while (cin >> n) {
        mx = ans = g = 0;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (mx < arr[i])
                mx = arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == mx)
                continue;

            ans += mx - arr[i];
            g = __gcd(g, mx - arr[i]);
        }

        cout << ans / g << " " << g << endl;
    }

    return 0;
}
