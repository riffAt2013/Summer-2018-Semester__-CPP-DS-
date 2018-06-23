#include <iostream>
#include "dynamic.cpp"

using namespace std;

int main()
{
    dynamic <float> c (10);
    c.setValue(0, 54.55);
    c.setValue(1, 154.55);
    c.setValue(2, 254.55);

    cout<<c.getValue(0);
}
