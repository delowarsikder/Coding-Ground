// #include <iostream>
// using namespace std;

// class Example
// {
//     static int x;
//     int y;

// public:
//     void show()
//     {
//         y = 0;
//     }
    
//     void count()
//     {
//         ++x;
//         ++y;
//         cout << "\n value of x=" << x;
//         cout << "\n value of y=" << y;
//     }
// };

// int Example::x = 0; // initialization of static member variable

// int main()
// {
//     Example a, b, c;
//     a.show();
//     b.show();
//     c.show();
   
//     a.count();
//     b.count();
//     c.count();
// }


#include <iostream>

class Something
{
public:
    static const int s_value=4;
};

// int Something::s_value{ 1 };

int main()
{
    Something first;
    Something second;

    // first.s_value = 6;

    std::cout << first.s_value << '\n';
    // second.s_value=1;
    std::cout << second.s_value << '\n';
    return 0;
}