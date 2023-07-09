#include <iostream>
using namespace std;
#include <cmath>
int main ()
{
     int a,b,c;
     cin>>a>>b>>c;
     int def;
     int mx = 0;
     mx = max((max (a,b)),c);
     int mn =0;
     mn= min((min (a,b)),c);

     if(mx == a)
     {
     	if (mn == b)
     	{
     		def = c;
        }
		else
		  {
		      def = b;
		  }
     }
      if(mx == b)
     {
     	if (mn == a)
     	{
     		def = c;
        }
		else
		  {
		      def = a;
		  }
     }
      if(mx == c)
     {
     	if (mn == b)
     	{
     		def = a;
        }
		else
		  {
		      def = b;
		  }
     }
       cout << mn<<endl <<def<<endl<<mx<<endl;
     cout <<endl;
     cout <<a<<endl<<b<<endl<<c;
}
