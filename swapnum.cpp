#include <iostream>
using namespace std;
int main() {

int a,b;
cout<<"Enter the value of a :";
cin>>a;

cout<<"Enter the value of b :";
cin>>b;

int c;
c=b;
b=a;
a=c;

cout<<"The new value of a is :"<<a<<endl;
cout<<"The new value of b is :"<<b<<endl;



    return 0;
}