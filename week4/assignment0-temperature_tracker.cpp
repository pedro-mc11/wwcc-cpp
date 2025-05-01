#include <iostream>
using namespace std;

int main() {

    int days = 0;
    int temps[7];
    int highTemp;
    int lowTemp;
    int highDay = 0;
    int lowDay = 0;
   
    int sum = 0;

    cout << "Temperature Tracker" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i <= 6; i++) {
        cout << "Enter temperature for day " << (days + 1) << ": ";
        days++;
        cin >> temps[i];
    }

    highTemp = temps[0];
    for (int i = 1; i <= 6; i++) {
        if (temps[i] > highTemp) {
            highTemp = temps[i];
            highDay = i;
        }
    }


    lowTemp = temps[0];
    for (int i = 0; i <= 6; i++) {
        if (temps[i] < lowTemp) {
            lowTemp = temps[i];
            lowDay = i;
            
        }
    }

    for (int temp : temps) {
        sum += temp;
    }

    cout << sum << endl;

    cout << "\nTemperature Analysis:" << endl;
    cout << "Highest temperature: " << highTemp << "˚F " << "(day " << highDay + 1 << ")" << endl;
    cout << "Lowest temperature: " << lowTemp << "˚F " << "(day " << lowDay + 1 << ")" << endl;

    cout << "Average temperature: " << (sum / 7) << "˚F"  << endl;

    cout << "\nDays with above-average temperatures: " << endl;

     for (int i = 0; i <= 6; i++) {
        if (temps[i] > (sum / 7)) {
            cout << "- Day " << i + 1 << ": " << temps[i] << "˚F" << endl;
        }
    }  
    return 0;
}