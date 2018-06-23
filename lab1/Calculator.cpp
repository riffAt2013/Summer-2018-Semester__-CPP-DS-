#include <iostream>
#include "Calculator.h"
using namespace std;

Calculator::Calculator() {}
Calculator::~Calculator() {
cout<<"\nobject is being deleted"<<endl;
}

Calculator::addition() {
cout<<"\naddition v1.1\nEnter two numbers"<<endl;
cin>>var1;
cin>>var2;
resVar = var1+var2;

}

Calculator::show() {
    cout<<"the answer is: ";
return resVar;
}
