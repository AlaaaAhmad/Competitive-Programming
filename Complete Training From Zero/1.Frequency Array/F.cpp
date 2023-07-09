#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int freq[123]; 
int main()
{
    int n;
    cin >> n; 
    string s;
    cin >> s;
    set<char> st; 
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]); 
        st.insert(s[i]); 
    }
    if (st.size() == 26)
        cout << "YES"; 
    else
        cout << "NO"; 
}