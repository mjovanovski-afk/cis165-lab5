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
