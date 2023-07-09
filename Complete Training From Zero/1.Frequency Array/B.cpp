#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define endl "\n"

long long fact(long long n)
{
    ll res = 1;
    for (ll i = 1; i<= n; i++)
    {
        res*= i;
    }
    return res;
}
long long comb(ll n,ll r)
{
    return ((fact(n)/fact(n-r))/fact(r));
}
long long perm(ll n, ll r)
{
    return (fact(n)/fact(n-r));
}

/*
number of subarrays = n - r + 1;
where n is the number of elements in the array and r is
the number of elements you want to get in the subarray

*/

/* ASCII */
/*
a --> 97
z --> 122
A --> 65
Z --> 90
*/
bool isPrime(ll n)
{
    if (n == 1) return false;
    for (ll i = 2; i * i <= n; i++)
    {

        if (n%i == 0 ) return false;
    }
    return true;
}
bool is_char(char x)
{
    return ((x >= 'A' and x <= 'Z') or ( x >= 'a' and x <= 'z'));
}
const unsigned int M = 1e9+7;
int main(){
ios_base::sync_with_stdio(false);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
int t = 1;  //cin>>t;

while (t--)
 {
    string n,m; cin>>n>>m;
    map<char,int>mp1,mp2;
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < n.size(); i++)
    {
        mp1[n[i]]++;
    }
    for (int i = 0; i < m.size(); i++)
    {
        mp2[m[i]]++;
    }
    for (int i = 0; i < m.size(); i++)
    {
        if (mp1[m[i]] == 0) flag = false;
        else
        {
            cnt += min(mp1[m[i]], mp2[m[i]]);
            mp2[m[i]] = 0;

        }
    }
    if (!flag) cout<<"-1";
    else cout<<cnt;
 }

}
