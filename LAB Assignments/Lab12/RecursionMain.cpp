#include <iostream>
#include <cmath>
using namespace std;
#define N <<'\n';

int fib (int n)
{
    if (n==0||n==1)
        return n;
    else
        return fib (n-1)+fib(n-2);
}

int factorial (int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial (n-1);

}

int sumOfDigits (int x)
{
    if (x==0)
        return 0;
    else
        return x%10 + sumOfDigits(x/10);
}

int findMin (int a[], int size)
{
    if (size==1)
        return 1;
    else
        return min (a[size-1], findMin (a, size-1));

}


int DecToBin (int dec)
{
    if (dec==0)
        return 0;
    else
        return (dec% 2+ 10*DecToBin(dec/2));

}

double sum (int n)
{
    if (n==0)
        return 1;
    else
    {
        return 1/pow(2, n)+sum(n-1);
    }
}

int main()
{

    cout<<"Fibonacci of 6: "<<fib (6)N;
    cout<<"Factorial of 10: "<<factorial (10)N;
    cout<<"Sum of Digits 5212: "<<sumOfDigits(5212)N;

    int tryThis[] = {-1,-99,5,6,9,8,7};
    cout<<"Min value of array tryThis is: "<<findMin (tryThis, sizeof(tryThis))N;

    cout<<"Decimal to binary of 5: "<<DecToBin(5)N;

    cout<<"Sum of the series when n is 5: "<<sum(5)N;

    return 0;
}
