#include <iostream>

class ConversionUtils {
public:
    // Task 6
    static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }
};

int main() {
    using std::cout;
    using std::endl;

    // test
    double celsius = 25.0;
    double fahrenheit = ConversionUtils::celsiusToFahrenheit(celsius);

    cout << celsius << " degrees Celsius is equal to " 
         << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}
