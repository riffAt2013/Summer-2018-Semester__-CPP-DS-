#include<bits/stdc++.h>
using namespace std;
int arr[123456] , temp[123456] , n;

void Do(int lo ,int hi){
    if(lo == hi) return ;       
    int mid =  0.5 * (hi + lo);
    Do(lo , mid);
    Do(mid + 1 , hi);
    for(int i = lo , j = mid + 1 , k = lo ; k <= hi ; k++){
        if(i == mid + 1) temp[k] = arr[j++];
        else if(j == hi + 1) temp[k] = arr[i++];
        else if(arr[i] < arr[j]) temp[k] = arr[i++];
        else temp[k] = arr[j++];
    }
    for(int i = lo ; i <= hi ; i++) arr[i] = temp[i];
}

int main()
{
    cin >> n;
    for(int i = 0 ; i<n ; i++) cin >> arr[i];
    Do( 0 , n - 1);
    for(int i = 0 ; i<n-1  ; i++) cout << arr[i] << " ";
    cout << arr[n-1] << endl;

}
