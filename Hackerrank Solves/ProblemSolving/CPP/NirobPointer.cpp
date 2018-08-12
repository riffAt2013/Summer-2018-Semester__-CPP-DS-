//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>
using namespace std;
void  update (int* a, int* b)
{
    int c,d;
    c = *a+*b;
    d = abs(*a - *b);
    *a = c;
    *b  = d;
}

int main ()
{
    int a = 4, b  = 5;
    update(&a, &b);
    cout<<a<<" "<<b;
}



