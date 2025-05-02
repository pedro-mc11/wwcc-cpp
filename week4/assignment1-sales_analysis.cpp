#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    double sum;
    double bestDay;
    double worstDay;
    int bestWeekday = 0;
    int worstWeekday = 0;
    int aboveAverage = 0;
    double weekendPercentage;


    double saleAmounts[7];
    string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "WEEKLY SALES ANALYSIS" << endl;
    cout << "---------------------" << endl;

    for (int i = 0; i <= 6; i++) {
        cout << "Enter sales for " << daysOfWeek[i] << ": ";
        cin >> saleAmounts[i];
    }

    // for (double saleAmount : saleAmounts) {
    //     cout << saleAmount << endl;
    // }

    for (int i = 0; i <= 6; i++) {
        sum += saleAmounts[i];
    }

    cout << "\nSales Summary:" << endl;
    printf("Total Sales: $%.2f\n", sum);
    printf("Average Daily Sales: $%.2f\n", (sum / 7));

    bestDay = saleAmounts[0];
    for (int i = 1; i <= 6; i++) {
        if (saleAmounts[i] > bestDay) {
            bestDay = saleAmounts[i];
            bestWeekday = i;
        }
    }

    worstDay = saleAmounts[0];
    for (int i = 1; i <= 6; i++) {
        if (saleAmounts[i] < worstDay) {
            worstDay = saleAmounts[i];
            worstWeekday = i;
        }
    }

    for (int i = 0; i <= 6; i++) {
        if (saleAmounts[i] > (sum / 7)) {
            aboveAverage++;
        }
    }
    // for best and worst day implement a similar system from yesterday, basically a for loop that goes through anf compares the prevoiud vlaue to the next and if its greater or lower to set the new variable to the higher or lower thing
    
    printf("\nBest Day: %s with $%.2f\n", daysOfWeek[bestWeekday].c_str(), bestDay);
    printf("Worst Day: %s with $%.2f\n", daysOfWeek[worstWeekday].c_str(), worstDay);
    
    // same thing like prevous loop, do a counter and if a day above the average increment counter by 1
    cout << "\nDays above average: " << aboveAverage << endl;

    weekendPercentage = ((saleAmounts[5] + saleAmounts[6]) / sum) * 100;
    printf("Weekend Sales: $%.2f (%.1f%% of total)\n", (saleAmounts[5] + saleAmounts[6]), weekendPercentage);


   
    return 0;
}