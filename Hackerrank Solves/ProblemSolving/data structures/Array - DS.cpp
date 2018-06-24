
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N; cin>>N; int a[N];
  for (int i=0; i<N; i++)
  {
      int temp; cin>>temp; a[i] = temp;
  }
  
  for (int i=N-1; i>=0; i--)
  {
      cout<<a[i]<<" ";
  }
  
}
