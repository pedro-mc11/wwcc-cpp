#include <iostream>
#include <iomanip>  // For setw function
using namespace std;


int main() {
    int start, end;
    int width = 5;

    cout << "Multiplication Table Generator" << endl << endl;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    // Validate input
    if(start > end) {
        cout << "Error: Starting number must be less than ending number." << endl;
        return 1;
    }
    cout << endl;
    
    cout << setw(width) << " " << " |";
    for(int i = start; i <= end; i++) {
        cout << setw(width) << i;
    }
    cout << endl;

    cout << string(width, '-') << "-|";
    for(int i = start; i <= end; i++) {
        cout << string(width, '-');
    }
    cout << endl;

    for(int i = start; i <= end; i++) {
        cout << setw(width) << i << " |";
        for(int j = start; j <= end; j++) {
            cout << setw(width) << i * j;
        }
        cout << endl;
    }

    return 0;
}