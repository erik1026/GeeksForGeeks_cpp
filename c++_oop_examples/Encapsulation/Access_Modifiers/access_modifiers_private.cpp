#include <iostream>

class Circle
{
    private:
        double radius;
    
    public:
        double compute_area(double r)
        {
            radius = r;

            double area = radius*radius*3.14;
            
            std::cout << "Radius is: " << radius << "\n";
            std::cout << "Area is: " << area << std::endl;

            return area;
        }
};

int main(int argc, char* argv[])
{
    Circle obj;

    //  Trying to access private data member dirtectly outside the class
    //  Results in a compiler error
    //obj.radius = 1.5;

    obj.compute_area(1.5);

    return 0;
}