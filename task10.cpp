#include <iostream>
using namespace std;
int main()
{
   int a,b,c,d,e,f;
   cin>>a>>b>>c>>d;

   cout<< ((c*100+d)-(a*100+b))/100<<"dollars"<<endl;
   cout<< (((c*100+d)-(a*100+b))%100)<<" "<<"cents";



system("pause>nul");
return 0;
}