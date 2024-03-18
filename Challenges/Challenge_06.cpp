// change this code from cpp to java 

#include <iostream>
using namespace std;

class Temperature {
    private:
        double temperature;
        char unit;
    public:
        Temperature(double temp, char u) : temperature(temp), unit(toupper(u)) {}

        double convertToCelsius() {
            if (unit == 'F' || unit == 'f') {
                return (temperature - 32) * 5 / 9;
            }
            else if (unit == 'C' || unit == 'c') {
                return temperature;
            }
            else {
                return 0;
            }
        }

        double convertToFahrenheit() {
            if (unit == 'C' || unit == 'c') {
                return (temperature * 9 / 5) + 32;
            }
            else if (unit == 'F' || unit == 'f') {
                return temperature;
            }
            else {
                return 0;
            }
        }

        void displayConversion() {
            if (unit == 'F') {
                cout << temperature << " F is " << convertToCelsius() << " C." << "\n";
            }
            else if (unit == 'C') {
                cout << temperature << " C is " << convertToFahrenheit() << " F." << "\n";
            }
            else {
                cout << "Invalid temperature unit. Please enter 'F' or 'C'." << "\n";
            }
        }
};

int main() {
    double temperature;
    char unit;
    bool cont = true;
    char ask;

    while (cont) {
        cout << "Enter temperature (followed by 'F' for Fahrenheit or 'C' for Celsius): ";
        cin >> temperature >> unit;
        Temperature temp(temperature, unit);
        temp.displayConversion();
        cout << "Do you want to quit the program? (Y/N): ";
        cin >> ask;
        if (ask == 'Y' || ask == 'y')
            cont = false;
    }

    return 0;
}

