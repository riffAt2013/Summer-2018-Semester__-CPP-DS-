#include <iostream>
#include "dynamic.cpp"

using namespace std;

int main()
{
    int N;
    cout<<"Enter size: "<<'\n';
    cin>>N;
    dynamic <float> c (N);
    cout<<"Enter index values from 0-N: "<<endl;
    for (int i=0; i<N; i++)
    {
        float temp; cin>>temp; c.setValue(i,temp);
    }

    cout<<"Which index value to show ";
    int temp;
    cin>>temp;
    cout<<c.getValue(temp);
