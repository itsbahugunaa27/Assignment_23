#include<iostream>
using namespace std;;
int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"X = "<<x<<" and "<<"Y = "<<y;
    return 0;
}

