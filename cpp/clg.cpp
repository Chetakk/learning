#include<iostream>
using namespace std;
// class a
// {
//     public :
    
//     a(a &b)
//     {

//         cout<<b;
//     }
//     // a(a z)
//     // {
//     //     b=200; // b = z.b;
//     //     cout<<b;
//     // }
// };

// int main(void)
// {
//     a c;
// }

class x {
    int y;
    public:
        // void init() {
        //     y = 100;
        // }
        void something(x z) {
            y=100;
            cout << y;
        }
};

int main () {
    x a , b;
    // a.init();
    b.something(a);

}