//--- Alaa Ahmad ---//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el "\n"              // Invincible :)
void Fast_Code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
/*
// ASCII
A -- 65
Z -- 90
a -- 97
z -- 122
*/
long long primeCheck(ll num)
{
    for (ll i = 2; i*i <= num; i++)
    {
        if (num%i == 0) return false;
    }
    return true;
}
long long fact(ll num)
{
    ll ans = 1;
    while (num)
    {
        ans*=num;
        num--;
    }
    return ans;
}
void Solve()
{
    ll a,b,c,d; cin>>a>>b>>c>>d;
    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    ll pro = a*b*c*d;
    ll ans = pro%100;
    if (ans < 10)
    {
        cout<<"0"<<ans;
    }
    else
    {
        cout<<ans;
    }
}
int main ()
{
   Fast_Code();
   ll t = 1; //cin>>t;
   while (t--)
   {
       Solve();
   }


}
