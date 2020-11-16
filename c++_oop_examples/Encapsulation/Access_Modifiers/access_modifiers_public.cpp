#include <iostream>

class Circle
{
    public:
        double radius;

        double computer_area()
        {
            return 3.14*radius*radius;
        }
};

int main(int argc, char* argv[])
{
    Circle obj;

    //  accessing public datamember ouside class
    obj.radius = 5.5;

    std::cout << "Radius is: " << obj.radius << "\n";
    std::cout << "Area is: " << obj.computer_area() << std::endl;


    return 0;
}