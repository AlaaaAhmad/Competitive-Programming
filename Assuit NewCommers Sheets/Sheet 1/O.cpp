#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x,y;
    char s;
    cin>>x>>s>>y;
    if (s=='+')
        cout<<x+y;
    else if (s== '*')
        cout <<x*y;
    else if (s=='-')
        cout<<x-y;
    else if (s=='/')
        cout<<x/y;
}
