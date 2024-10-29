# Monthly Budget Form

## Overview

The Monthly Budget Form program allows users to input their total expenses for various categories and compares them against a predefined budget. It displays a summary of the budget, actual expenses, and the difference (over or under budget) for each category.

## Features

- Allows users to enter their total expenses for the month.
- Compares actual expenses against a predefined budget.
- Displays a detailed report showing the budget, actual expenses, and over/under for each category.

## Technologies Used

- C++

## File Structure

```
monthly-budget-form/
│
├── main.cpp                      # Main C++ source file containing the program logic
```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/mrochelle23/Monthly-Budget-Form.git
   ```
2. Navigate to the project directory:
   ```bash
   cd monthly-budget-form
   ```
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ main.cpp -o Monthly-Budget-Form
   ```

4. Run the executable:
   ```bash
   ./Monthly-Budget-Form
   ```

## Usage

- The program prompts the user to enter their total expenses for various categories, including Housing, Internet, Household, Transportation, Food, Medical, Insurance, Entertainment, Clothing, and Miscellaneous.
- It calculates and displays a comparison of the user's expenses against a predefined budget, showing how much they are over or under budget for each category.

## Example Output

```
Enter the total expenses for the month.
Housing: 900
Utilities, Internet & Phone: 150
Household Expenses: 50
Transportation: 60
Food: 300
Medical: 30
Entertainment: 150
Clothing: 100
Miscellaneous: 40

-------------------------------------------------------------------------------
Expenses                   Budget                Total              Over/Under
-------------------------------------------------------------------------------
Housing                   $1000.00             $900.00               $100.00
Internet                  $200.00              $150.00                $50.00
Household Expenses         $63.00               $50.00                $13.00
Transportation            $52.00               $60.00                -$8.00
Food                      $250.00              $300.00               -$50.00
Medical                   $40.00               $30.00                $10.00
Insurance                 $125.00              $0.00                $125.00
Entertainment             $130.00              $150.00               -$20.00
Clothing                  $80.00               $100.00               -$20.00
Miscellaneous             $50.00               $40.00                $10.00
-------------------------------------------------------------------------------
```

## Code Explanation

- **Struct MonthlyBudget**: This struct defines the budget categories and their amounts.
- **getTotalExpenses Function**: Prompts the user to enter their total expenses for each category and stores the values in the `total` struct.
- **displayBudgetComparison Function**: Displays the budget, total expenses, and the difference for each category in a formatted table.
- **Main Function**: Initializes the budget amounts, calls the input and display functions, and manages program flow.

## STRETCH CHALLENGES

- Allow users to save their budget and expenses to a file for future reference.
- Implement functionality to visualize spending trends over time.
- Add options for users to set their own budget amounts.
