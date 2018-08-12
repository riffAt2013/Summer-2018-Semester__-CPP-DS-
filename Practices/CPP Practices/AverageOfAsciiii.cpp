#include <iostream>
using namespace std;

double AvgOfAscii (char* arr)
{
    int sum = 0;
    for (int i = 0; i<sizeof(arr); i++)
        sum+= (int)arr[i];
    return (double)sum/sizeof(arr);
}

int main ()
{
    char arr[] = {'a','b','1','2'};

    double b =  AvgOfAscii(arr);
    cout<<b;
}



