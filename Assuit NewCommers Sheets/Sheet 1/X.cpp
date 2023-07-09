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
// To calculate the sum of numbers;
ll calcSum (ll fNum, ll lNum, ll n)
{
    return ((fNum+lNum)*n)/2;
}
void Solve()
{
   int l1,r1,l2,r2;
   cin>>l1>>r1>>l2>>r2;
   if (l2>r1 or l1>r2)
   {
       cout<<"-1";
   }
   else
   {
        if (l2>=l1)
       {
           cout<<l2<<" ";
       }
       else
       {
           cout<<l1<<" ";
       }
       if (r2>= r1)
       {
           cout<<r1;
       }
       else
       {
           cout<<r2;
       }

   }
}
int main ()
{
    Fast_Code();
    Solve();
}