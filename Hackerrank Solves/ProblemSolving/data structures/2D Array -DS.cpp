#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int A[6][6];
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            int temp; cin>>temp; A[i][j] = temp;
        }
    }
    
    vector<int> vec;
    int sum;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            sum= A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
            vec.push_back(sum);
        }
    }
    
    sort(vec.begin(), vec.end());
    cout<<vec[15];
    
}
