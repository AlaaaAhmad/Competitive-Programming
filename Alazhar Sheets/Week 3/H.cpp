#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
bool isPrime (ll n)
{
    if (n == 2) return true;
    if (n == 1) return false;
    for (ll i = 2; i *i <= n; i++)
    {
        if (n%i == 0) return false;
    }
    return true;
}
int main()
{
   int n; cin>>n;
   int arr[n], pre[n];
   int cnt = 0;
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   pre[0] = arr[0];
   for (int i = 1; i < n; i++)
   {
       pre[i] = arr[i] + pre[i-1];
   }
   for (int i = 0; i < n-1; i++)
   {
       int def1 = pre[i];
       int def2 = pre[n-1] - pre[i];
       if (def1 == def2) cnt++;
   }
   cout<<cnt;
}
