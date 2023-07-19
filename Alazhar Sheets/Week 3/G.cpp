#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

ll fact (ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

ll comb (ll n, ll r)
{
    return fact((fact(n) / fact(n - r)) / fact(r));
}
int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ll arr[n];
    map<ll,ll>mp;
    ll cnt = 0, mx = 0, mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        mx = max(arr[i], mx);
        mn = min(arr[i], mn);
    }
    ll res = mx + mn;
    for (ll i = 0; i < n; i++)
    {
        ll dif = res - arr[i];
        if (arr[i] == dif)
            {
                ans +=(mp[arr[i]] * (mp[arr[i]]-1))/2;
                mp[arr[i]] = 0;
            }
        else {
            ans+= mp[arr[i]] * mp[dif];
            mp[arr[i]] = 0;
            mp[dif] = 0;
        }
    }
    cout << ans;
}
