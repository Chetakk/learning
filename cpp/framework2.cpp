#include<iostream>

using namespace std;

class comp
{
    public :
        int r,i;
    
    comp()
    {
        cout<<"Enter Eq. Real no. : ";
        cin>>r;
        cout<<"Enter Eq. Imaginary no. : ";
        cin>>i;
    }
    void sum(comp k)
    {
        int rsum,isum;
        rsum=r+k.r;
        isum=i+k.i;
        cout<<"Summed Equation = "<<rsum<<" + "<<isum<<"i\n";
    }
    void sub(comp s)
    {
        int rsub,isub;
        rsub=r-s.r;
        isub=i-s.i;
        cout<<"Subbed Equation = "<<rsub<<" - "<<isub<<"i\n";
    }
};

int main(void)
{
    comp obj1,obj;
    obj1.sum(obj);
    obj1.sub(obj);
}