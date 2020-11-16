#include <iostream>

class Geeks
{
    public:
        void func(int x)
        {
            std::cout << "value of x is: " << x << "\n";
        }

        void func(double x)
        {
            std::cout << "value of x is: " << x << "\n";
        }

        void func(int x, int y)
        {
            std::cout << "value of x and y is: " << x << ", " << y << "\n";
        }
};

int main ()
{

    Geeks obj;

    obj.func(5);

    obj.func(0.75);

    obj.func(2, 6);

    return 0;
}