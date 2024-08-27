#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() : width(0), height(0)
    {
        cout << "default constr of rect called" << endl;
    };
    // param constructor
    Rectangle(int w, int h) : width(w), height(h)
    {
        cout << "constructor with params or rect is called" << endl;
    }
    // copy constr
    Rectangle(const Rectangle &other) : width(other.width), height(other.height) 
    {
        cout << "Copy Constructor of Rectangle called" << endl;
    }
    ~Rectangle()
    {
        cout << "Deconst of Rect is called" << endl;
    }
    // method to set dimension
    void setDimensions(int w, int h)
    {
        if (w >= 0 && h >= 0)
        {
            width = w;
            height = h;
        }
    }
    // method to display dimension
    void display() const
    {
        cout << "width " << width << ", height: " << height << endl;
    }
};

class Book
{
public:
    string title;
    double price;

    Book(const string &t = "Unknown", double p = 0.0) : title(t), price(p)
    {
        cout << "Book Constr called" << endl;
    }
    void display() const
    {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

class Circle
{
protected:
    double radius;

public:
    Circle(double r = 0.0) : radius(r)
    {
        cout << "Circle Constructor called" << endl;
    }
    // Copy constructor
    Circle(const Circle &other) : radius(other.radius)
    {
        cout << "Circle Copy Constructor called" << std::endl;
    }
    void display() const
    {
        cout << "Radius: " << radius << std::endl;
    }
};

class Sphere : public Circle
{
private:
    double vol;

public:
    // constr initialising base class and own members
    Sphere(double r) : Circle(r), vol((4.0 / 3.0) * 3.141 * r * r * r)
    {
        cout << "sphere const called" << endl;
    }

    // copy constructor
    Sphere(const Sphere &other) : Circle(other), vol(other.vol)
    {
        cout << "Sphere const called" << endl;
    }
    void display() const
    {
        Circle::display();
        cout << "Volume: " << vol << endl;
    }
};
class Person
{
private:
    string name;
    int age;

public:
    Person(const string &n, int a) : name(n), age(a)
    {
        cout << "Person const called" << endl;
    }
    // Public method to get name
    string getName() const
    {
        return name;
    }
    // Public method to get age
    int getAge() const
    {
        return age;
    }
};

class Employee : public Person
{
private:
    int employeeID;

public:
    // Primary constructor
    Employee(const std::string &n, int a, int id) : Person(n, a), employeeID(id)
    {
        std::cout << "Primary Employee Constructor called" << std::endl;
    }

    // Delegating constructor
    Employee(const std::string &n, int a) : Employee(n, a, 0)
    {
        std::cout << "Delegating Employee Constructor called" << std::endl;
    }

    void display() const
    {
        std::cout << "Name: " << getName() << ", Age: " << getAge() << ", ID: " << employeeID << std::endl;
    }
};

int main()
{

    Rectangle rect1;
    rect1.setDimensions(10, 5);
    rect1.display();

    Rectangle rect2(20, 10);
    rect2.display();

    Rectangle rect3 = rect2;
    rect3.display();

    Book b1; // Default arguments
    Book b2("C++ Primer", 39.99);
    b1.display();
    b2.display();

    Sphere s1(7.5); // Derived class constructor
    s1.display();

    Sphere s2 = s1; // Copy constructor
    s2.display();

    Employee e1("John", 30, 123); // Primary constructor
    Employee e2("Jane", 25);      // Delegating constructor
    e1.display();
    e2.display();

    return 0;
}