#include <iostream>
using namespace std;
int main()
{
   int k,m,n;
   cin>>k>>m>>n;
   cout<<((n-(k%n+1))/k+1)*2*m;
 



system("pause>nul");
return 0;
}