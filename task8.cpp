#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   
   
   if(a==0) { cout<<"INF";}
   else if ((b%a)==0) {
   cout<<b/a*(-1);}
   else if ((b%a)!=0) {cout<<"no";}
   



system("pause>nul");
return 0;
}