#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    return roundf(distance * 100) / 100;
}

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of the first point: " << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    cout << "Enter the coordinates of the second point: " << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    cout << "The distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is : " << calculateDistance(x1,y1,x2,y2) << endl; 
    
    return 0;
}