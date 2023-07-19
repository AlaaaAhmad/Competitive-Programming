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

void Solve()
{
  ll n,k; cin>>n>>k;
  if (n%2 != 0)
  {
      if (k>(n/2)+1)
      {
           k = (k - ((n/2)+1));
           cout<<2+(2*(k-1));
      }
      else if (k<= (n/2)+1)
      {
          cout<<1+(2*(k-1));
      }
  }
  else
  {
      if (k> (n/2))
      {
          k = k - ((n/2));
          cout<<2+(2*(k-1));
      }
      else
      {
          cout<<1+(2*(k-1));
      }
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