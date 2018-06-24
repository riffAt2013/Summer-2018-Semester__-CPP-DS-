[Link for Problem] (https://www.hackerrank.com/challenges/c-tutorial-strings/)

#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  string a;
  cin>>a;
  string b;
  cin>>b;
  string c = a+b;
  
  cout<<a.size()<<" "<<b.size()<<endl;
  cout<<c<<endl;
  
  string d =a;
  string e = b;
  
  a[0] = e[0];
  b[0] = d[0];
  
  cout<<a<<" "<<b<<endl;
   
}
