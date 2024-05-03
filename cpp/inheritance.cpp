//single inheritance

// #include<iostream>
// #include<math.h>
// using namespace std;

// //sdfhau
// //hra+da+pf
// class nums
// {
//     public:
//     int a,b;
    
//     void inp()
//     {
//         cout<<"Enter two numbers :";
//         cin>>a>>b;
//     }
// };

// class cal : public nums
// {
//     public :

//     void sum()
//     {
//         cout<<"Addition = "<<a+b<<endl;
//     }

//     void sub()
//     {
//         cout<<"Diffrence ="<<a-b<<endl;
//     }

//     void mul()
//     {
//         cout<<"Product ="<<a*b<<endl;
//     }

//     void div()
//     {
//         cout<<"Quotient ="<<a/b<<endl;
//         cout<<"Reminder ="<<a%b<<endl;
//     }

//     void mod()
//     {
//         int moda=1,modb=1;
//         for(int i=1;i<=a;i++)
//         {
//             moda*=i;
//         }
//         cout<<"Factorial of first number ="<<moda<<endl;
//         for(int i=1;i<=b;i++)
//         {
//             modb*=i;
//         }
//         cout<<"Factorial of second number ="<<modb<<endl;
//     }

//     void sq()
//     {
//         cout<<"Square of first number ="<<a*a<<endl;
//         cout<<"Square of second number ="<<b*b<<endl;
//     }

//     void sqr()
//     {
//         cout<<"Square root of first number ="<<sqrt(a)<<endl;
//         cout<<"Square root of second number ="<<sqrt(b)<<endl;
//     }
// };

// int main(void)
// {
//     nums a;
//     cal b;
//     b.inp();
//     b.sum();
//     b.sub();
//     b.mul();
//     b.div();
//     b.mod();
//     b.sq();
//     b.sqr();
// }

//multi inheritance

#include<iostream>
using namespace std;

class detail
{
    public :
    int empid;
    char empname[15];
    void inp(){
    cout<<"Input ID and Name :\n";
    cin>>empid>>empname;
    }
};

class salary
{
    public:
    int sal,pf,da,hra,csal,nsal;
    void inp_sal()
    {
        cout<<"Input salary :";
        cin>>sal;
    }
    void cal()
    {
        cout<<"Salary ="<<sal<<endl;
        pf=sal*12/100;
        cout<<"Pf ="<<sal*18/100<<endl;
        hra=sal*7/100;
        cout<<"HRA ="<<sal*7/100<<endl;
        da=sal*30/100;
        cout<<"DA ="<<sal*30/100<<endl;
        csal=sal+pf+da+hra;
        cout<<"Groos Salary ="<<pf+da+hra<<endl;
        cout<<"Net Salary ="<<csal-pf<<endl;

        
    }
};

class emp : public detail,public salary
{
    public:
    void display()
    {
    cout<<"Employee Name ="<<empname<<endl;
    cout<<"Employee ID ="<<empid<<endl;
    cal();
    }

};

int main(void)
{
    detail a;
    salary b;
    emp e1;
    e1.inp();
    e1.inp_sal();
    e1.display();
}