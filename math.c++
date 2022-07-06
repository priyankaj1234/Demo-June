#include<iostream>
using namespace std;
int main()
{
    system("CLR");
    int a,b,c,d,f;
    float e;

    cout<<endl<<"Enter A";
    cin>>a;

    cout<<endl<<"Enter B";
    cin>>b;

    c=a+b;
    d=a-b;
    e=b/a;
    f=a*b;

    cout<<endl<<"Addition:"<<c;

    cout<<endl<<"Substraction :"<<d;

    cout<<endl<<"Devision : "<<e;

    cout<<endl<<"Multiplication : "<<f;

    return 0;
}