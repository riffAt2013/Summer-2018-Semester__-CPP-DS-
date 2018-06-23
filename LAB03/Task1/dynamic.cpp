

#include<iostream>
#include "dynamic.h"
using namespace std;

template <class ARB>
dynamic<ARB>::dynamic(int s)
{
    data = new ARB[s];
    size = s;
}
template <class ARB>
dynamic<ARB>::~dynamic()
{
    delete [] data;
}

template <class ARB>
ARB dynamic<ARB>::getValue(int index)
{
 return data[index];
}

template <class ARB>
void dynamic<ARB>::setValue(int index, ARB value)
{
    data[index] = value;
}
