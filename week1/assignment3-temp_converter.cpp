#include <iostream>
using namespace std;
int main() {
    double temperature;
    char unit;

    
    cout << "Temperature Converter" << endl;
    cout << "*********************" << endl;

    cout << "Enter temperature value: ";
    cin >> temperature;

    cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;

    if(unit == 'C') {
        cout << "\n" << temperature << "˚C is equal to " << (temperature * 9/5) + 32 << "˚F";
    }
    else if (unit == 'F'){
        cout << "\n" << temperature << "˚F is equal to " << (temperature - 32) * 5/9 << "˚C" << endl;
    }
    else {
        cout << "[Not a valid unit of temperature]"
    }

    return 0;
}

// F = (C * 9/5) + 32
// C = (F - 32) * 5/9

// Temperature Converter
// Enter temperature value: 100
// Enter unit (C for Celsius, F for Fahrenheit): C
// 100°C is equal to 212°F