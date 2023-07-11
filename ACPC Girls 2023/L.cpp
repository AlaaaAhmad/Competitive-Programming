// By: Alaa Ahmad //
#include <bits/stdc++.h>
#define endl "\n"

using namespace std; 
int main () 
{
    int t; cin>>t; 
    while (t--)
    {
        int n;
        int cnt = 0; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
            if (arr[i] % 2 != 0)
                cnt++; 
        }
        if (cnt % 2 == 0) 
            cout << "Win" << endl; 
        
        else 
            cout << "Lose" << endl;
        
    }
}