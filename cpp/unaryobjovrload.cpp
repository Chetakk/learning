#include<iostream>
#include<string>

using namespace std;

class student{
    string name,regno;
    int marks;
    public:
    void get()
    {
        cout<<"Enter the name of student :";
        cin>>name;
        cout<<"Enter Reg No. of "<<name<<" : ";
        cin>>regno;
        cout<<"Enter the total marks of "<<name<<" : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Student INFO :\n";
        cout<<"Name = "<<name;
        cout<<"\nReg No. = "<<regno;
        cout<<"\nMarks = "<<marks<<endl;
    }
    void operator++()
    {
        marks+=2;
        cout<<"Marks after increament = "<<marks<<endl;
    }
    void operator--(int)
    {
        marks-=3;
        cout<<"Marks after decreament = "<<marks<<endl;
    }
};

int main(void)
{
    int stu;
    cout<<"Enter number of students :";
    cin>>stu;
    student obj1[stu];
    for(int i=0;i<stu;i++)
    {
        obj1[i].get();
        obj1[i].display();
        ++obj1[i];
        obj1[i]--;
    }
}