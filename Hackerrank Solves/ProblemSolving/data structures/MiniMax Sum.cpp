#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int arr[5];
    for (int i=0; i<5; i++)
    {
        int temp; cin>>temp; arr[i] = temp;
    }
    
    sort (arr, arr+5); //terrible?
    long long int sum1=0;
    for (int i=0; i<4; i++)
    {
     sum1+=arr[i];
    }
    long long int sum2=0;
    for (int i=1; i<5; i++)
    {
     sum2+=arr[i];
    }    
    cout<<sum1<<" "<<sum2;
  }
