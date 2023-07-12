// By: Alaa Ahmad 
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll; 
using namespace std; 
int main()
{
    string s, newS = "";
    cin >> s;
    newS += s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'a')
            newS += s[i]; 
        else {
            reverse(newS.begin(), newS.end());
            newS.front() = toupper(newS.front());
            newS.back() = tolower(newS.back()); 
            cout << newS << " ";
            newS = "";
            newS += s[i]; 
        }
      
    }
    reverse(newS.begin(), newS.end());
    newS.front() = toupper(newS.front());
    newS.back() = tolower(newS.back());
    cout << newS; 
}