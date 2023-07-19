// By: Alaa Ahmed
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ln;                 //Invincible :)
#define el "\n"
void Fast_Code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
// To calculate the sum of numbers;
ll calcSum (ll fNum, ll lNum, ll n)
{
    return ((fNum+lNum)*n)/2;
}

//last number in a seq= fnum+ (n-1)*d;
//where d is the difference between numbers in the sequence


// Prime numbers check
 bool isPrime (ll n)
 {
     bool flag = true;
     if (n == 1)
     {
         return false;
     }
    for (int i = 2; i< n/2; i++)
    {
        if (n%i == 0)
        {
            flag = false;
            return false;
        }
    }
    if (flag)
    {
        return true;
    }
 }
// to convert a string to int, to float, to double : stoi(s),stof(s), stod(s);

void Solve()
{
   ll t; cin>>t;
   while (t--)
   {
       ll n; cin>>n;
       ll ans = calcSum(1,n,n);
       vector<ll>power;
       power.push_back(1);
       ll sum= 0;
       for (ll i = 1; i <=32; i++)
       {
           power.push_back(power[i-1]*2);
       }
       for (ll i = 0; i <=32; i++)
       {
           if (power[i]<=n)
           {
               sum+=power[i];
           }
       }
       cout<<ans - sum-sum<<el;
   }
}

int main ()
{
    Fast_Code();
    Solve();
}