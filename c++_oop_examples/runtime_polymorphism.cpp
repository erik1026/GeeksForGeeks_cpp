#include <iostream>

//  Shapes without virutal functions
/*
class Shape
{
    public:
        Shape(int l, int w)
        {
            this->length = l;
            this->width = w;
        }

        int getArea()
        {
            std::cout << "This is the parent class area " << std::endl;
        }

    protected:
        int length;
        int width;
};

class Square : public Shape
{
    public:
        Square(int l = 0, int w = 0) : Shape(l, w)
        {    
        }
        //  declaring and initializing derived class constructor

        int getArea()
        {
            std::cout << "Square Area: " << length * width << std::endl;
            return (length*width);
        }
};

class Rectangle : public Shape
{
    public:
        Rectangle(int l = 0, int w = 0) : Shape(l, w)
        {}

        int getArea()
        {
            std::cout << "Rectangle Area: " << length * width << std::endl;
            return(length * width);
        }
};
*/

//  Shapes WITH virtual functions
class Shape
{
    public:
        Shape(int l, int w)
        {
            this->length = l;
            this->width = w;
        }

        virtual int getArea() = 0; // pure virtual(Abstract) function

    protected:
        int length;
        int width;
};

class Square : public Shape
{
    public:
        Square(int l = 0, int w = 0) : Shape(l, w)
        {    
        }
        //  declaring and initializing derived class constructor

        int getArea()
        {
            std::cout << "Square Area: " << length * width << std::endl;
            return (length*width);
        }
};

class Rectangle : public Shape
{
    public:
        Rectangle(int l = 0, int w = 0) : Shape(l, w)
        {}

        int getArea()
        {
            std::cout << "Rectangle Area: " << length * width << std::endl;
            return(length * width);
        }
};


int main(int argc, char* argv[])
{
    Shape* s;
    Square sq(5, 5);
    Rectangle rec(4, 5);

    s = &sq;
    s->getArea();
    s = &rec;
    s->getArea();

    return 0;
}