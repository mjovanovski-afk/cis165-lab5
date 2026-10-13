#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    const double PERCENT_CONVERSION = 100.0;
    const double MONTHS_IN_YEAR = 12.0;
    const int LABEL_WIDTH = 26;
    const int VALUE_WIDTH = 10;

    double loan_amount = 0.0;
    double annual_rate_percent = 0.0;
    double number_of_payments = 0.0;

    double monthly_rate = 0.0;
    double monthly_rate_percent = 0.0;
    double rate_growth_factor = 0.0;
    double monthly_payment = 0.0;
    double amount_paid_back = 0.0;
    double interest_paid = 0.0;

    cout << "Enter the loan amount: $";
    cin >> loan_amount;

    cout << "Enter the annual interest rate as a percentage: ";
    cin >> annual_rate_percent;

    cout << "Enter the total number of monthly payments: ";
    cin >> number_of_payments;
    
    monthly_rate = (annual_rate_percent / PERCENT_CONVERSION) / MONTHS_IN_YEAR;

    monthly_rate_percent = monthly_rate * PERCENT_CONVERSION;

    rate_growth_factor = pow(1.0 + monthly_rate, number_of_payments);

    monthly_payment = ((monthly_rate * rate_growth_factor) / (rate_growth_factor - 1.0)) * loan_amount;

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;
    
    cout << fixed << setprecision(2);

    cout << "          LOAN PAYMENT REPORT           \n";

    cout << left << setw(LABEL_WIDTH) << "Loan Amount:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << loan_amount << "\n";

    cout << left << setw(LABEL_WIDTH) << "Monthly Interest Rate:";
    cout << right << setw(VALUE_WIDTH) << monthly_rate_percent << "%\n";

    cout << left << setw(LABEL_WIDTH) << "Number of Payments:";
    cout << right << setw(VALUE_WIDTH) << static_cast<int>(number_of_payments) << "\n";

    cout << left << setw(LABEL_WIDTH) << "Monthly Payment:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << monthly_payment << "\n";

    cout << left << setw(LABEL_WIDTH) << "Amount Paid Back:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << amount_paid_back << "\n";

    cout << left << setw(LABEL_WIDTH) << "Interest Paid:";
    cout << right << "$" << setw(VALUE_WIDTH - 1) << interest_paid << "\n";

    return 0;
}