#include<iostream>
using namespace std;

int main()
{
    int n,d,result;
    cout<<"Enter numerator and denomenator: ";
    cin>>n>>d;
    try
    {
        if(d==0)
        {
            throw d;
        }
        result=n/d;
        cout<<"Result: "<<result<<endl;
    }
    catch(...)
    {
        cout<<"Division by zero is not allowed"<<endl;
    }
}