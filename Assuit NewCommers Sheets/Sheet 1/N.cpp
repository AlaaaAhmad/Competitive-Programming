#include <iostream>
using namespace std;
int main ()
{
    char let;
    cin >>let;
    if ((let >=65)&&(let<97))
    {

       let =let + 32;
        cout << let;
    }
   else if (let >=97)
     {

       let= let -32;
       cout << let;
     }
}
