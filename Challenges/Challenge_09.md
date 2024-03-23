## What is the Abstraction principle in OOP?
- Abstraction is a fundamental concept in object-oriented programming (OOP)
that involves managing complexity by hiding unnecessary details from the user.
Abstraction is typically achieved through classes and interfaces.

- Data abstraction refers to providing only essential information about the data to the outside world,
hiding the background details or implementation.

### Write code to know more about that principle in any language you want.   :) 

``` cpp
    #include <iostream>
    #include <string>
    using namespace std;
    // Abstract class
    class Shape
    {
    protected:
        string name;
    
    public:
        Shape(const string &name) : name(name) {}
        virtual void draw() = 0;
        ~Shape() {}
    };
    
    // Derived class
    class Circle : public Shape
    {
    private:
        float radius;
    
    public:
        Circle(const string &name, float radius) : Shape(name), radius(radius) {}
    
        void draw() // Implement the draw function
        {
            cout << "Drawing " << name << " with radius " << radius << endl;
        }
    };
    
    int main()
    {
        Circle circle("Circle", 5.0);
        circle.draw();
        return 0;
    }
```
