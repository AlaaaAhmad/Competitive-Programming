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
int freq[200001];
int main(){
ios_base::sync_with_stdio(false);

int t = 1;  cin>>t;

while (t--)
 {
   bool flag = false;
   int ans = -1;
   int n; cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
       freq[arr[i]]++;
   }
   for (int i = 0; i < n; i++)
   {
       if (freq[arr[i]] >= 3)
       {
           ans = arr[i];
           flag = true;
       }
       freq[arr[i]] = 0;
   }
    cout<<ans<<endl;
 }
}