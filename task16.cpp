#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double a,b,c,x1,x2,q;
   cin>>a>>b>>c;
   q=sqrt(b*b-4*a*c);
   x1= (b*(-1)+(q))/2*a;
   x2= (b*(-1)-(q))/2*a;
   
   cout<<"x1="<<x1<<endl;
   cout<<"x2="<<x2;



system("pause>nul");
return 0;
}