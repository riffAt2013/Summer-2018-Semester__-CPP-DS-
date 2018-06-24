#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, sum1=0, sum2=0;   cin>>N;    int arr[N][N];
    
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++) 
        {
            int temp; cin>>temp; arr[i][j] = temp; 
        }
    }
     for (int i=0; i<N; i++)
    {
        sum2+=arr[i][N-i-1];
         for (int j=0; j<N; j++)
        {
            if (i==j) sum1+=arr[i][j];
            
        }
    }
    cout<<abs(sum1-sum2);
}
