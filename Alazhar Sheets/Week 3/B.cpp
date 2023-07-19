//--- Alaa Ahmad ---//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define  F first
#define S second
const int M = 100000007;          // Invincible :)
void Fast_Code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Solve()
{
  ll n; cin>>n;
  string s; cin>>s;
  ll zeros = 0, ones = 0;
  for (ll i = 0; i < s.size(); i++)
  {
      if (s[i] == '0') zeros++;
      else ones++;
  }
  ll del = (min(zeros,ones)*2);
  cout<<n - del;
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