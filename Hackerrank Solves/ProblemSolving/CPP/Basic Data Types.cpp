
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int a;
 long long int b;
 char c;
 float d;
 double e;
 
 cin>>a>>b>>c>>d>>e;
 cout.precision(10);    //Why MAN!
 cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<fixed<<e;

}
