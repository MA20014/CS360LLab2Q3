#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Rectangle
{
    private:
            float length;
            float width;
    public:
            void setLength(float len);
            void setWidth(float wid);
            float perimeter();
            float area();
            void show();
            int sameArea(Rectangle r);
};

void Rectangle::setLength(float len)
{
    length = len;
}

void Rectangle::setWidth(float wid)
{
    width = wid;
}

float Rectangle::perimeter()
{
    return 2*(length+width);
}

float Rectangle::area()
{
    return length*width;
}
void Rectangle::show()
{
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
}
int Rectangle::sameArea(Rectangle r)
{
    if(area()==r.area())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    Rectangle rect1, rect2;

    // Setting the length and width of the first rectangle
    rect1.setLength(5);
    rect1.setWidth(2.5);

    // Setting the length and width of the second rectangle
    rect2.setLength(5);
    rect2.setWidth(18.9);

    // Displaying rectangle information
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;

    cout << endl;

    cout << "Rectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << endl;
    cout << "Perimeter: " << rect2.perimeter() << endl;

    // Checking if the rectangles have the same area
    if (rect1.sameArea(rect2))
        cout << "The two rectangles have the same area." << endl;
    else
        cout << "The two rectangles do not have the same area." << endl;

    cout << endl;

    // Setting new dimensions for the first rectangle
    rect1.setLength(15);
    rect1.setWidth(6.3);

    // Displaying rectangle information after updating dimensions
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;

    cout << endl;

    cout << "Rectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << endl;
    cout << "Perimeter: " << rect2.perimeter() << endl;

    // Checking if the rectangles have the same area after updating dimensions
    if (rect1.sameArea(rect2))
        cout << "The two rectangles have the same area." << endl;
    else
        cout << "The two rectangles do not have the same area." << endl;

    return 0;
}
