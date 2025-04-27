#include <iostream>
using namespace std;

double dollarToEuro(double amount);
double dollarToPound(double amount);
double dollarToYen(double amount);
int getConversionCount();
void currencyConverter();

int main() {
    currencyConverter();

    return 0;
}
void currencyConverter() {
    int choice; 
    double amountUSD;
    char convertAgain; 

    cout << "\nCURRENCY CONVERTER" << endl;
    cout << "------------------" << endl;

    cout << "1. Convert USD to Euro (EUR)" << endl;
    cout << "2. Convert USD to British Pound (GBP)" << endl;
    cout << "3. Convert USD to Japanese Yen (JPY)" << endl;
    cout << "4. Exit" << endl;

    do {
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;
    }while(choice != 1 && choice != 2 && choice != 3 && choice != 4);

    if (choice == 4) {
        cout << "\nThank you for using the Currency Converter!\n";
        exit(1);
    }
    else {
        do {
            cout << "Enter amount in USD: ";
            cin >> amountUSD;
        }while (amountUSD < 0);
        

        switch (choice)
        {
        case 1:
            printf("%.2f USD = %.2F EUR\n", amountUSD, dollarToEuro(amountUSD));
            break;
        case 2: 
            printf("%.2f USD = %.2F GBP\n", amountUSD, dollarToPound(amountUSD));
            break;
        case 3:
            printf("%.2f USD = %.2F JPY\n", amountUSD, dollarToYen(amountUSD));
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    cout << "\nNumber of conversions performed: " << getConversionCount() << endl;
    cout << "\nWould you like to perform another conversion? (y/n): ";
    cin >> convertAgain;
    
    if (convertAgain == 'y') {
        currencyConverter();
    }
    else {
        cout << "\nThank you for using the Currency Converter!\n";
    }
    
}
double dollarToEuro(double amount) {
    return amount * 0.85;
}
double dollarToPound(double amount) {
    return amount * 0.74;
}
double dollarToYen(double amount) {
    return amount * 110.33;
}
int getConversionCount() {
    static int count = 0;
    count++;

    return count;
}