#include <iostream>
#include <iomanip>
#include <sstream>



using namespace std;
string format(int num) {
    string number = to_string(num); // turns num from int to string and stores new string value in "number"
    int numberLen = number.length(); // gets length of "number" and stores it in "numberLen" | length: 7
    string numberWithCommas;
    int commaCount = 0;

    for (int i = (numberLen - 1); i >= 0; i--) { // i = 6 | the for loop goes until 6 becomes 1 | decrements
        numberWithCommas += number[i];
        commaCount++;
        
        if (commaCount == 3 && i != 0) {
            numberWithCommas += ",";
            commaCount = 0;
        }
    }
    reverse(numberWithCommas.begin(), numberWithCommas.end());

    return numberWithCommas;
}

string format(double num) {
    stringstream doubleString;
    doubleString << fixed << setprecision(2) << num;

    return doubleString.str();

}

string format(double num, int precision) {
    stringstream doubleString;
    doubleString << fixed << setprecision(precision) << num;
    return doubleString.str();
}

string format(const string& text) {
    string capitalizedText = text; 
    bool newWord = true;

    for (char& c : capitalizedText) { 
        if (isspace(c)) {
            newWord = true;
        } else if (newWord) {
            c = toupper(c);
            newWord = false;
        }
    }
    return capitalizedText;
}

int main() {
    int number;
    double numWith2;
    double numWith3;
    string text;

    cout << "Integer formatting:" << endl;
    cout << "Original: ";
    cin >> number;
    cout << "Formatted: " << format(number) << endl;
    
    cout << "\nDouble formatting (default 2 decimal places):" << endl;
    cout << "Original: ";
    cin >> numWith2;
    cout << "Formatted: " << format(numWith2) << endl;

    cout << "\nDouble formatting (custom decimal places):" << endl;
    cout << "Original: ";
    cin >> numWith3;
    cout << "Formatted: " << format(numWith3, 3) << endl;

    cout << "\nString formatting:" << endl;
    cout << "Original: ";
    cin >> text;
    cout << "Formatted: " << format(text) << endl;

    

    return 0;

}

