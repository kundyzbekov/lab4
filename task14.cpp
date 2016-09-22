#include <iostream>
using namespace std;
int main()
{
   int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
   if (x2==x1+1 || x2==x1-1) {
   cout<<"yes";}
   
   else if (y2==y1+1 || y2==y1-1) {
   cout<<"yes:";}
   
   else if (x2==x1-1 && y2==y1+1) {
   cout<<"yes";}

   else if (x2==x1-1 && y2==y1-1) {
   cout<<"yes";}

   else if (x2==x1-1 && y2==y1+1) {
   cout<<"yes";}

   else if (x2==x1+1 && y2==y1-1) {
   cout<<"yes";}

   else {
   cout<<"no";}




system("pause>nul");
return 0;
}
