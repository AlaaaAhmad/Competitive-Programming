#include <iostream>
 #include <string.h>
 using namespace std;
 int main ()
 {
     char x;
     cin>>x;
     if ((x>=0)&&(x<65))
        cout << "IS DIGIT";
     else if ((x>=65)&&(x<97))
        cout <<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
     else if (x>=97)
        cout <<"ALPHA"<<endl<<"IS SMALL"<<endl;

 }
