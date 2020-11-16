#include <iostream>

class Encapsulation
{
    private:
        //  Data hidden from outside world
        int x;

    public:
        //  Function to set value of variable x
        void set(int a)
        {
            x = a;
        }

        //  Function to return value of variable x
        int get()
        {
            return x;
        }
};

int main(int argc, char* argv[])
{
    Encapsulation obj;

    obj.set(5);

    std::cout << obj.get();
    
    return 0;
}