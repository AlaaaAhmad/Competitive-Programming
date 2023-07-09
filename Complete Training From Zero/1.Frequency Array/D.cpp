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
   int t; cin>>t;
   while (t--)
   {
      int n; cin>>n;
      int arr[n];
      int ans;
      for (int i=0; i< n; i++)
      {
          cin>>arr[i];
      }
      for (int i = 0;i<n; i++)
      {
          if (i ==0)
          {
              if (arr[i] != arr[i+1] and arr[i]!= arr[i+2])
              {
                  ans = i+1;
                  break;
              }
          }
          else if (i == n-1)
          {
              if (arr[i] != arr[i-1] and arr[i] != arr[i-2])
              {
                  ans = i+1;
                  break;
              }
          }
          else
          {
              if (arr[i] != arr[i-1] and arr[i] != arr[i]+1)
              {
                  ans = i+1;
                  break;
              }
          }
      }
      cout<<ans<<el;
   }
}

int main ()
{
    Fast_Code();
    Solve();
}