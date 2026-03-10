#include <stdio.h>

int main() {
    int week;
    float income;
    // Categories
    float rent, internet, electric, insurance, groceries, gas;
    float other_needs, debt, loans, roth_ira, s_fund, wants;
    float total_expenses, balance;

    printf("--- Weekly Finance Input ---\n");
    printf("Enter Week Number: ");
    scanf("%d", &week);
    printf("Enter Total Income: ");
    scanf("%f", &income);

    // Prompting for each category
    printf("Rent: ");          scanf("%f", &rent);
    printf("Internet: ");      scanf("%f", &internet);
    printf("Electric: ");      scanf("%f", &electric);
    printf("R. Insurance: ");  scanf("%f", &insurance);
    printf("Groceries: ");     scanf("%f", &groceries);
    printf("Gas: ");           scanf("%f", &gas);
    printf("Other Needs: ");   scanf("%f", &other_needs);
    printf("Debt: ");          scanf("%f", &debt);
    printf("Loans: ");         scanf("%f", &loans);
    printf("Roth IRA: ");      scanf("%f", &roth_ira);
    printf("S Fund: ");        scanf("%f", &s_fund);
    printf("Wants: ");         scanf("%f", &wants);

    // Calculate totals
    total_expenses = rent + internet + electric + insurance + groceries + 
                     gas + other_needs + debt + loans + roth_ira + s_fund + wants;
    balance = income - total_expenses;

    // Formatted ASCII Output
    // %-15s = Left align string, 15 spaces
    // %10.2f = Right align float, 10 spaces total, 2 decimal places
    printf("\n+----------------------------+\n");
    printf("| WEEK %-21d |\n", week);
    printf("+----------------------------+\n");
    printf("| %-15s %10.2f |\n", "Income", income);
    printf("+----------------------------+\n");
    printf("| %-15s %10.2f |\n", "Rent", rent);
    printf("| %-15s %10.2f |\n", "Internet", internet);
    printf("| %-15s %10.2f |\n", "Electric", electric);
    printf("| %-15s %10.2f |\n", "R. Insurance", insurance);
    printf("| %-15s %10.2f |\n", "Groceries", groceries);
    printf("| %-15s %10.2f |\n", "Gas", gas);
    printf("| %-15s %10.2f |\n", "Other Needs", other_needs);
    printf("| %-15s %10.2f |\n", "Debt", debt);
    printf("| %-15s %10.2f |\n", "Loans", loans);
    printf("| %-15s %10.2f |\n", "Roth IRA", roth_ira);
    printf("| %-15s %10.2f |\n", "S Fund", s_fund);
    printf("| %-15s %10.2f |\n", "Wants", wants);
    printf("+----------------------------+\n");
    printf("| %-15s %10.2f |\n", "TOTAL COSTS", total_expenses);
    printf("| %-15s %10.2f |\n", "REMAINING", balance);
    printf("+----------------------------+\n");

    return 0;
}
