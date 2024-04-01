#include<iostream>
using namespace std;

class binary
{
    int a,b;
    public:

    void get()
    {
        cout<<"Enter the two numbers : ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Numbers : "<<a<<" "<<b<<endl;
    }

    void operator+(binary x)
    {
        int sum1,sum2;
        sum1=a+x.a;
        sum2=b+x.b;
        cout<<"Sum of first elements are "<<sum1<<endl;
        cout<<"Sum of secont two elements are "<<sum2;
    }
};

int main(void)
{
    binary a,b;
    a.get();
    b.get();
    cout<<"before overloading\n";
    a.show();
    b.show();
    cout<<"Aftern oveloading\n";
    a+b;
}