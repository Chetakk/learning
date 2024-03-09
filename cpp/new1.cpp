#include <iostream>
using namespace std;
// class payable
// {
// private:
//     float meal, tax, total, tip;

// public:
//     void get()
//     {
//         cout << "Enter the Meal Cost :";
//         cin >> meal;
//     }

//     void cal()
//     {
//         tax = meal * (6.5 / 100);
//         total = tax + meal;
//         tip = .15 * total;
//     }

//     void print()
//     {
//         cout << "payable Tax =" << tax<<endl;
//         cout << "Total payable =" << tax << "+" << meal << "=" << total<<endl;
//         cout << "Tip =" << tip<<endl;
//         cout << "Thanks for Eating with US ❤️!!!!!!";
//     }
// };

// int main(void)
// {
//     payable a;
//     a.get();
//     a.cal();
//     a.print();
// }

class shop
{
    public :
        int pen=0,penp,notebook=0,notep,a4=0,a4p,snacks=0,snacksp,price;
        
    
    public :
    

    void penn()
    {
        cout<<"Enter the quantity of Pen :";
        cin>>pen;
        cout<<"Enter the price of Pen :";
        cin>>penp;
        pen=pen*penp;
        cout<<"The total price for pens are :"<<pen<<endl;
    }

    void notebookk()
    {
        cout<<"Enter the quantity of Notebook :";
        cin>>notebook;
        cout<<"Enter the price of Notebook :";
        cin>>notep;
        notebook=notebook*notep;
        cout<<"The total price for Notebooks are :"<<notebook<<endl;
    }

    void a44()
    {
        cout<<"Enter the quantity of A4 sheets :";
        cin>>a4;
        cout<<"Enter the price of A4 sheets :";
        cin>>a4p;
        a4=a4*a4p;
        cout<<"The total price for A4 sheets are :"<<a4<<endl;
    }

    void snackss()
    {
        cout<<"Enter the quantity of Snacks :";
        cin>>snacks;
        cout<<"Enter the price of Snacks :";
        cin>>snacksp;
        snacks=snacks*snacksp;
        cout<<"The total price for Snacks are :"<<snacks<<endl;
    }  
    
    void cal()
    {
        cout<<"The cost of Pens = "<<pen<<endl;
        cout<<"The cost of Notebooks = "<<notebook<<endl;
        cout<<"The cost of A4 sheets = "<<a4<<endl;
        cout<<"The cost of Snacks = "<<snacks<<endl;
        price=pen+notebook+a4+snacks;
        if (price>500)
        {
            price=price-50;
            cout<<"The Total cost of the items after didcution of 50 = "<<price;
        }
        else
        {
            cout<<"The total cost of the item = "<<price;
        }
    }
};

int main(void)
{
    shop bat;
    int a;
    cout<<"Enter the item that you bought as number :\n";
    cout<<"1.Pen\n";
    cout<<"2.Notebook\n";
    cout<<"3.A4 sheets\n";
    cout<<"4.Snacks\n";
    cout<<"0. to STOP!!!\n";
    for (int i=0;i<4;i++)
        {
            cout<<"Enter your choice:";
            cin>>a;
            if (a==1)
            {
                bat.penn();
            }
            else if(a==2)
            {
                bat.notebookk();
            }
            else if(a==3)
            {
                bat.a44();
            }
            else if(a==4)
            {
                bat.snackss();
            }
            else if(a==0)
            {
                break;
            }
            else
            {
                cout<<"Wrong choice!!!!!";
            }
        }
    bat.cal();
}
