CIS 165 - Lab 5: Compound Interest and Loan Payments

Overview:
This project has two C++ programs that calculate financial formulas using variables, math functions, and clean printing formats.

Program 1: compound_interest.cpp
This program asks for a starting balance, interest rate, and how often interest is compounded in a year. It then calculates the total interest earned and the final balance in savings.

Program 2: loan_payment.cpp
This program asks for a loan amount, annual interest rate, and the number of monthly payments. It then calculates the monthly payment, total amount paid back, and total interest paid.

How to Compile and Run:

Compound Interest
Compile: g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
Run: ./compound_interest

Test inputs: 1000 for principal, 4.25 for rate, 12 for compounding.
Expected results: $43.34 interest earned, $1043.34 total savings.

Loan Payment
Compile: g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment
Run: ./loan_payment

Test inputs: 10000 for loan amount, 12 for rate, 36 for payments.
Expected results: $332.14 monthly payment, $11957.15 total paid back, $1957.15 interest paid.
