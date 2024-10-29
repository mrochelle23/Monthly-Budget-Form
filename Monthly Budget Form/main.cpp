#include <iostream>
#include <iomanip>

// created 6/1/24

using namespace std;

struct MonthlyBudget {
    // Defined Variables
    double Housing;
    double Internet;
    double Household;
    double Transportation;
    double Food;
    double Medical;
    double Insurance;
    double Entertainment;
    double Clothing;
    double Miscellaneous;
};

void getTotalExpenses(MonthlyBudget &total) {
    cout << "Enter the total expenses for the month.\n";
    cout << "Housing: ";
    cin >> total.Housing;
    cout << "Utilities, Internet & Phone: ";
    cin >> total.Internet;
    cout << "Household Expenses: ";
    cin >> total.Household;
    cout << "Transportation: ";
    cin >> total.Transportation;
    cout << "Food: ";
    cin >> total.Food;
    cout << "Medical: ";
    cin >> total.Medical;
    cout << "Entertainment: ";
    cin >> total.Entertainment;
    cout << "Clothing: ";
    cin >> total.Clothing;
    cout << "Miscellaneous: ";
    cin >> total.Miscellaneous;
}

void displayBudgetComparison(const MonthlyBudget &budget, const MonthlyBudget &total) {
    cout << fixed << setprecision(2);
    cout << "-------------------------------------------------------------------------------\n";
    cout << "Expenses                   Budget                Total              Over/Under\n";
    cout << "-------------------------------------------------------------------------------\n";
    
    cout << "Housing                   " << setw(10) << budget.Housing
         << setw(18) << total.Housing
         << setw(18) << budget.Housing - total.Housing << "\n";
    
    cout << "Internet                  " << setw(10) << budget.Internet
         << setw(18) << total.Internet
         << setw(18) << budget.Internet - total.Internet << "\n";
    
    cout << "Household Expenses         " << setw(10) << budget.Household
         << setw(18) << total.Household
         << setw(18) << budget.Household - total.Household << "\n";
    
    cout << "Transportation            " << setw(10) << budget.Transportation
         << setw(18) << total.Transportation
         << setw(18) << budget.Transportation - total.Transportation << "\n";
    
    cout << "Food                      " << setw(10) << budget.Food
         << setw(18) << total.Food
         << setw(18) << budget.Food - total.Food << "\n";
    
    cout << "Medical                   " << setw(10) << budget.Medical
         << setw(18) << total.Medical
         << setw(18) << budget.Medical - total.Medical << "\n";
    
    cout << "Insurance                 " << setw(10) << budget.Insurance
         << setw(18) << total.Insurance
         << setw(18) << budget.Insurance - total.Insurance << "\n";
    
    cout << "Entertainment             " << setw(10) << budget.Entertainment
         << setw(18) << total.Entertainment
         << setw(18) << budget.Entertainment - total.Entertainment << "\n";
    
    cout << "Clothing                  " << setw(10) << budget.Clothing
         << setw(18) << total.Clothing
         << setw(18) << budget.Clothing - total.Clothing << "\n";
    
    cout << "Miscellaneous             " << setw(10) << budget.Miscellaneous
         << setw(18) << total.Miscellaneous
         << setw(18) << budget.Miscellaneous - total.Miscellaneous << "\n";
    
    cout << "-------------------------------------------------------------------------------\n";
}

int main() {
    // Budget Amounts
    MonthlyBudget budget = {1000.00, 200.00, 63.00, 52.00, 250.00, 40.00, 125.00, 130.00, 80.00, 50.00};
    MonthlyBudget total;

    getTotalExpenses(total);
    displayBudgetComparison(budget, total);

    return 0;
}
