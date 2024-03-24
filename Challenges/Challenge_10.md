# What is the Polymorphism principle in OOP?
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

A real-life example of polymorphism is a person who at the same time can have different characteristics.
A man at the same time is a father, a husband, and an employee.

## Write code to know more about that principle in any language you want.   :) 
``` cpp
    #include <iostream>
    using namespace std;
    
    
    class Shape {
    public:
        virtual void draw() {
            cout << "Drawing a shape.\n";
        }
    };
    
    class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a circle.\n";
        }
    };
    
    class Square : public Shape {
    public:
        void draw() override {
            cout << "Drawing a square.\n";
        }
    };
    
    int main() {
        Shape* shapePtr;
    
        Circle circle;
        Square square;
    
        shapePtr = &circle;
        shapePtr->draw();  // Output: Drawing a circle.
    
        shapePtr = &square;
        shapePtr->draw();  // Output: Drawing a square.
    
        return 0;
    }
```
<details>
  <summary style="font-size:1.3rem;"> <strong>Function Overloading</strong></summary>
  <p>
    When there are multiple functions with the same name but different parameters,
    then the functions are said to be overloaded, hence this is known as Function Overloading.
    Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.
  </p>
  
``` cpp
    #include<iostream>
    using namespace std;
    
    class printData {
        public:
            void print(int i) {
                cout << "Printing int: " << i << endl;
            }
    
            void print(double f) {
                cout << "Printing float: " << f << endl;
            }
    
            void print(string c) {
                cout << "Printing string: " << c << endl;
            }
    };
    
    int main() {
        printData pd;
    
        // Call print to print integer
        pd.print(5);
    
        // Call print to print float
        pd.print(500.263);
    
        // Call print to print string
        pd.print("Hello C++");
    
        return 0;
}
```
</details>
<details>
  <summary style="font-size:1.3rem;"> <strong>Operator Overloading</strong></summary>
  <p>
    Operator overloading allows you to redefine or extend the behavior of operators such as +, -, *, /, and so on,
    for user-defined types. It enables you to use the operators with objects of your custom classes,
    providing a more natural and intuitive syntax.
  </p>
  
``` cpp
    #include <iostream>
    using namespace std;
    
    class Rectangle {
    private:
        double h, w;
    
    public:
        Rectangle(double hv, double wv) : h(hv), w(wv) {}
    
        Rectangle operator+(const Rectangle& other) const {
            return Rectangle(h + other.h, w + other.w);
        }
    
        void display() const {
            cout << "Height: " << h << ", Width: " << w << "\n";
        }
    };
    
    int main() {
        Rectangle r1(2.5, 3.7);
        Rectangle r2(1.8, 4.2);
    
        Rectangle sum = r1 + r2;
        sum.display();  // Output: Height: 4.3, Width: 8.9
    
        return 0;
    }
```
</details>
