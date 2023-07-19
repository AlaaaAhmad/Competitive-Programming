#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n; cin>>n;
    long long arr[n],  prefix [n], sortedPrefix[n];
    for (long long i = 0 ; i < n ; i++)
    {

        cin>>arr[i];
        if (i == 0)
        {
            prefix [i] = arr[0];
        }
        else
        {
            prefix [i] = prefix [i - 1] + arr[i];
        }

    }
     sort (arr, arr+n);
     for (long long j = 0 ; j < n ; j++)
     {
           if (j == 0)
        {
            sortedPrefix [j] = arr[0];
        }
        else
        {
            sortedPrefix [j] = sortedPrefix [j - 1] + arr[j];
        }

     }
     long long q; cin>>q;
     while (q--)
     {
          long long m,l,r;
         cin>>m>>l>>r;
         if (m == 1)
         {
             if ((l == 1) && (l == r))
             {
                 cout<<prefix [l-1]<<endl;
             }
             else if (l == 1)
             {
                 cout<<prefix[r-1]<<endl;
             }
             else
             {

             cout<< prefix[r-1] - prefix [l-2] <<endl;

             }
         }
         else
              if ((l == 1) && (l == r))
             {
                 cout<<sortedPrefix [l-1]<<endl;
             }
             else if (l == 1)
             {
                 cout<<sortedPrefix[r-1]<<endl;
             }
         else
             {
             cout<< sortedPrefix[r-1] - sortedPrefix[l-2]<<endl;
             }
     }
}