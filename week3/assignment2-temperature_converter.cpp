#include <iostream>
using namespace std;

void convertTemperature(int temp, char unit, double &celsius, double &fahrenheit, double &kelvin) {
    cout << "\nTemperature Conversions: " << endl;

    switch (unit) {
        case 'C':
            celsius = temp;
            fahrenheit = (celsius * 9 / 5) + 32;
            kelvin = celsius + 273.15;
            break;
        case 'F':
            fahrenheit = temp;
            celsius = (fahrenheit - 32) * 5 / 9;
            kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            break;
        case 'K':
            kelvin = temp;
            celsius = kelvin - 273.15;
            fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
            break;
        default:
            break;
    }

    printf("Celsius: %.2f˚C\n", celsius);
    printf("Fahrenheit: %.2f˚F\n", fahrenheit);
    printf("Kelvin: %.2fK\n",  kelvin);
    
}

int main() {
    int tempValue;
    char tempUnit;
    double celsius;
    double fahrenheit;
    double kelvin;

    cout << "Temperature Conversion Tool\n";
    cout << "---------------------------\n";
    
    cout << "Enter temperature: ";
    cin >> tempValue;

    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> tempUnit;

    convertTemperature(tempValue, tempUnit, celsius, fahrenheit, kelvin);

    return 0;
}

