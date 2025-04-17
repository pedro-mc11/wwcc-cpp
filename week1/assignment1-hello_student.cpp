#include <iostream>
using namespace std;

int main() {
    
    string name;
    int number;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Welcome to C++!" << endl;

    cout << "Choose a number between 1-10: ";
    cin >> number;
    cout << "Congrats you just won $" << number << "!" << endl;

    return 0;
}