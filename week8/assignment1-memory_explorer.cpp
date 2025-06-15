#include <iostream>
using namespace std;

void modifyByReference(int &x, int &y) {
    x = 100;
    y = 200;
}

void modifyByPointer(int *a, int *b) {
    if (a != nullptr && b != nullptr) {
        *a = 50;
        *b = 150;
    } else {
        cout << "Null pointer detected. Cannot modify values." << endl;
    }
}

int main() {
    cout << "MEMORY ADDRESS EXPLORER" << endl;
    cout << "-----------------------\n" << endl;

    cout << "PART 1: Variable Memory Locations" << endl;
    cout << "---------------------------------" << endl;

    int myInt = 42;
    double myDouble = 3.14;
    char myChar = 'A';

    cout << "Integer variable: " << myInt << " at address " << &myInt << endl;
    cout << "Double variable: " << myDouble << " at address " << &myDouble << endl;
    cout << "Character variable: '" << myChar << "' at address " << static_cast<void*>(&myChar) << endl;

    cout << "\nPART 2: Reference Demonstration" << endl;
    cout << "-------------------------------" << endl;

    int x = 10;
    int y = 20;
    cout << "Before reference function: x = " << x << ", y = " << y << endl;
    modifyByReference(x, y);
    cout << "After reference function: x = " << x << ", y = " << y << endl;

    cout << "\nPART 3: Pointer Demonstration" << endl;
    cout << "-----------------------------" << endl;

    int a = 5, b = 15;
    cout << "Before pointer function: a = " << a << ", b = " << b << endl;
    cout << "Pointer addresses: a at " << &a << ", b at " << &b << endl;
    modifyByPointer(&a, &b);
    cout << "After pointer function: a = " << a << ", b = " << b << endl;

    cout << "\nPART 4: Array and Pointer Relationship" << endl;
    cout << "--------------------------------------" << endl;

    int myArray[5] = {1, 2, 3, 4, 5};
    cout << "Array: [1, 2, 3, 4, 5]" << endl;
    cout << "Array name address: " << myArray << endl;
    cout << "First element address: " << &myArray[0] << endl;

    int *ptr = myArray;

    cout << "Second element via pointer arithmetic: " << *(ptr + 1) << endl;
    cout << "Third element via pointer arithmetic: " << *(ptr + 2) << endl;
    return 0;
}
