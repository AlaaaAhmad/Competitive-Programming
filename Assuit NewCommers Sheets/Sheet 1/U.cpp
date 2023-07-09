#include <iostream>
using namespace std;
int main ()
{
    float x;
    cin>>x;
    int y = x;
    if (x-y== 0)
    {
        cout << "int "<<y<<endl;
    }
    else
    {
        cout <<"float "<<y <<" "<< x-y;
    }

}
