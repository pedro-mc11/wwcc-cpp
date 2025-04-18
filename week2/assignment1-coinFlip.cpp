#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For time() function
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int flips;
    int heads = 0;
    int tails = 0;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;

    cout << "Simulating " << flips << " coin flips..." << endl << endl;

    // Simulate coin flips
    for (int i = 0; i < flips; ++i) {
        int flipResult = rand() % 2; // 0 = heads, 1 = tails
        if (flipResult == 0) {
            heads++;
        } else {
            tails++;
        }
    }

   
    // Display results
    cout << "Results:" << endl;
    cout << "Heads: " << heads << " (" << ("(%d)", heads) << ".00%)" << endl;
    cout << "Tails: " << tails << " (" <<("(%d)", tails) << ".00%)" << endl;

    return 0;
}
