#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void sol();
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
void sol()
{
    ll n;
    cin >> n;
    vector<ll> a(n), v;
    map<ll, ll> m;
    ll test = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > n)
        {
            test = 1;
        }
        m[a[i]]++;
        if (m[a[i]] > 2)
        {
            test = 1;
        }
    }
    if (test)
    {
        cout << "NO\n";
        return;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (m[i] < 1)
        {
            v.push_back(i);
        }
    }
    vector<ll> p(n), q(n);
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == 1)
        {
            p[i] = a[i];
            q[i] = a[i];
        }
    }
    vector<pair<ll, ll>> vec;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == 2)
        {
            vec.push_back(make_pair(a[i], i));
        }
    }
    sort(vec.begin(), vec.end());
    ll x = vec.size();
    ll y = v.size();
    // cout << x << " " << y << "\n";
    if (x != 2 * y)
    {
        cout << "NO\n";
        return;
    }
    // cerr << x << '\n';
    for (ll i = x - 1, j = y - 1; i >= 0; i -= 2, j--)
    {
        p[vec[i].second] = vec[i].first;
        q[vec[i].second] = v[j];
        p[vec[i - 1].second] = v[j];
        q[vec[i - 1].second] = vec[i - 1].first;
    }
    for (ll i = 0; i < n; i++)
    {
        ll mx = max(p[i], q[i]);
        if (mx != a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (auto it : p)
        cout << it << " ";
    cout << "\n";
    for (auto it : q)
        cout << it << ' ';
    cout << "\n";
}