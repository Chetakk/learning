#include <iostream>
using namespace std;

// class student
// {
// private:
//     char name[50];
//     int regno;
//     int m1, m2, m3, m4;

// public:
//     void get()
//     {
//         cout << "Enter name";
//         cin >> name;
//         cout << "Reg No and 4 Marks";
//         cin >> regno >> m1 >> m2 >> m3 >> m4;
//     }

//     void compute()
//     {
//         int total;
//         total = m1 + m2 + m3 + m4;
//         cout << "Total is : " << total;
//         cout << "Avg is : " << total / 4;
//     }
// };

// int main()
// {
//     student x;
//     x.get();
//     x.compute();
// }

// class attendence
// {
// private:
//     char name[50];
//     int perc;

// public:
//     void init()
//     {
//         cin >> name >> perc;
//     }

//     void add_perc()
//     {
//         perc++;
//         cout << perc;
//     }

//     void sub_perc()
//     {
//         perc--;
//         cout << perc;
//     }
// };

// int main()
// {
//     attendence x;

//     x.init();

//     int choice;

//     for (;;)
//     {
//         cout << "Enter Choice";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             x.add_perc();
//             break;

//         case 2:
//             x.sub_perc();
//             break;
//         default:
//             break;
//         }
//         if (choice == -1)
//         {
//             break;
//         }
//     }

//     return 0;
// }

class idk
{

private:
    int n1, n2, n3;

public:
    void get()
    {
        cin >> n1 >> n2 >> n3;
    }
    void find()
    {
        if (n1 > n2 && n1 > n3)
        {
            cout << n1;
        }
        else if (n2 > n1 && n2 > n3)
        {
            cout << n2;
        }
        else
        {
            cout << n3;
        }
    }
};

int main()
{
    idk x;
    x.get();
    x.find();

    return 0;
}