CIS 165 - Lab 5: Compound Interest and Loan Payments

OVERVIEW
This project contains two C++ programs that perform financial calculations using double variables, named constants, mathematical functions from , and formatted output using .

compound_interest.cpp: Calculates total savings and interest earned based on principal, annual rate, and compounding frequency.

loan_payment.cpp: Calculates monthly payment, total amount paid back, and total interest paid based on loan principal, annual rate, and total payments.

PROGRAM PLANS

Plan for Program 1: Compound Interest

Inputs: Principal balance, annual interest rate (percentage), times compounded per year.

Percentage Conversion: Divide annual rate by 100 to convert percentage to decimal.

Intermediate Variables: decimal_rate, amount_in_savings, interest_earned.

Formula: amount = principal * pow(1.0 + (decimal_rate / times_compounded), times_compounded)

Outputs: Interest rate %, times compounded, principal balance, interest earned, amount in savings.

Tests to perform: Assigned case ($1000, 4.25%, 12) and Custom case ($5000, 5.0%, 4).

Plan for Program 2: Loan Payment

Inputs: Loan amount, annual interest rate (percentage), total number of monthly payments.

Percentage Conversion: Divide annual rate by 100, then divide by 12 to get monthly decimal rate.

Intermediate Variables: monthly_rate, monthly_rate_percent, rate_growth_factor, monthly_payment, amount_paid_back, interest_paid.

Formulas:
monthly_rate = (annual_rate / 100) / 12
rate_growth_factor = pow(1.0 + monthly_rate, number_of_payments)
monthly_payment = ((monthly_rate * rate_growth_factor) / (rate_growth_factor - 1.0)) * loan_amount
amount_paid_back = monthly_payment * number_of_payments
interest_paid = amount_paid_back - loan_amount

Outputs: Loan amount, monthly rate %, number of payments, monthly payment, amount paid back, interest paid.

Tests to perform: Assigned case ($10000, 12%, 36) and Custom case ($20000, 6%, 60).

HOW TO RUN AND COMPILE

OnlineGDB Steps:

Go to onlinegdb.com and select C++17 from the top right menu.

Paste code into the editor window.

Click the green Run button.

Terminal Commands:
Compound Interest:
Compile: g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
Run: ./compound_interest

Loan Payment:
Compile: g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment
Run: ./loan_payment

TEST RECORD TABLE

Program and test: Compound interest — assigned
Inputs: 1000, 4.25%, 12
Expected results: Earned: $43.34, Savings: $1043.34
Actual results: Earned: $43.34, Savings: $1043.34
Match or correction: Match

Program and test: Compound interest — changed
Inputs: 5000, 5.00%, 4
Expected results: Earned: $254.73, Savings: $5254.73
Actual results: Earned: $254.73, Savings: $5254.73
Match or correction: Match

Program and test: Loan payment — assigned
Inputs: 10000, 12%, 36
Expected results: Monthly: $332.14, Paid: $11957.15, Interest: $1957.15
Actual results: Monthly: $332.14, Paid: $11957.15, Interest: $1957.15
Match or correction: Match

Program and test: Loan payment — changed
Inputs: 20000, 6%, 60
Expected results: Monthly: $386.66, Paid: $23199.36, Interest: $3199.36
Actual results: Monthly: $386.66, Paid: $23199.36, Interest: $3199.36
Match or correction: Match
