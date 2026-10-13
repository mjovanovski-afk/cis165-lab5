#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double PERCENT_CONVERSION = 100.0;
    const int LABEL_WIDTH = 26;
    const int VALUE_WIDTH = 10;

    double principal = 0.0;
    double annual_rate_percent = 0.0;
    double times_compounded = 0.0;

    double decimal_rate = 0.0;
    double amount_in_savings = 0.0;
    double interest_earned = 0.0;
    
    cout << "Enter the principal balance: $";
    cin >> principal;

    cout << "Enter the annual interest rate as a percentage: ";
    cin >> annual_rate_percent;

    cout << "Enter the number of times compounded per year: ";
    cin >> times_compounded;
    
    decimal_rate = annual_rate_percent / PERCENT_CONVERSION;

    amount_in_savings = principal * pow(1.0 + (decimal_rate / times_compounded), times_compounded);

    interest_earned = amount_in_savings - principal;

    cout << fixed << setprecision(2);

    cout << "        COMPOUND INTEREST REPORT        \n";

    cout << left << setw(LABEL_WIDTH) << "Interest Rate:" ;
    cout << right << setw(VALUE_WIDTH) << annual_rate_percent << "%\n";

    cout << left << setw(LABEL_WIDTH) << "Times Compounded:";
    cout << right << setw(VALUE_WIDTH) << static_cast<int>(times_compounded) << "\n";

    cout << left << setw(LABEL_WIDTH) << "Principal Balance:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << principal << "\n";

    cout << left << setw(LABEL_WIDTH) << "Interest Earned:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << interest_earned << "\n";

    cout << left << setw(LABEL_WIDTH) << "Amount in Savings:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << amount_in_savings << "\n";

    return 0;
}