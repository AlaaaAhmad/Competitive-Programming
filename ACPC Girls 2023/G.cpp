// By: Alaa Ahmad //
#include <bits/stdc++.h>
typedef long long ll;
using namespace std; 
int main()
{
    ll t;
    cin >> t; 
    while (t--)
    {
        ll n, m, avg1, avg2;
        cin >> n >> m >> avg1 >> avg2;
        cout << ((avg1 * n) - (avg2 * (n - m))); 
    }
}