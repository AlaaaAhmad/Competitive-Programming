#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ln;
#define el "\n"
 void Fast_Code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void Solve()
{
    ll n; cin>>n;
    ll sum = 0 ;
    for (int i = 1 ; i < n ; i+=2)
    {
        sum-=i;
        sum+=i+1;
    }
    if (n%2 != 0)
    {
        sum-=n;
    }

    cout<<sum<<el;



}
int main ()
{
    Fast_Code();
    Solve();
}