#include <bits/stdc++.h>
using namespace std;

int lucas (int n)
{
    if (n==0)
        return 2;
    else if (n==1)
        return 1;
    else return lucas(n-1)+lucas(n-2);
}

int main (void)
{
    int test = 0;
    while (test != 15)
    {
        cout<<"lucas of "<<test<<" :"<<lucas(test)<<'\n';
        test++;
    }


}
