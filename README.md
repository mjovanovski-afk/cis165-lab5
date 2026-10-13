CIS 165 - Lab 5: Compound Interest and Loan Payments

OVERVIEW
This project contains two C++ programs that perform financial calculations using double variables, named constants, mathematical functions from cmath, and formatted output using iomanip.

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

CODE EXPLANATION QUESTIONS
1. Why must a percentage be divided by 100 before using it in a formula?
A percentage represents a fraction out of 100 (for example, 5% means 5 out of 100). Math formulas require whole values expressed as decimals (0.05), so dividing by 100 scales the user's input to the correct numeric value.
2. How does pow represent exponentiation?
The pow(base, exponent) function raises the base expression to the given power. In pow(1.0 + rate, times), (1.0 + rate) is the base and times is the power.
3. What does the number of compounding periods change in the savings formula?
The number of compounding periods changes the number of times the earned interest added into the principal balance. More compounding periods mean interest is earned on top of interest more often, which results in a higher balance.
4. How is an annual interest rate converted to a monthly rate?
The annual percentage rate is first divided by 100 to get a decimal, and then divided by 12 (the number of months in a year) to get the monthly decimal rate.
5. Why should double be used for these calculations?
The double data type stores floating-point numbers with up to 15-17 digits of decimal precision, which prevents precision loss during multi-step math calculations.
6. Why should calculations use full precision when money is displayed to two decimal places?
If you round numbers early during math steps, tiny rounding errors add up and make your final answer wrong. Keeping full decimals until the end ensures your final dollar total stays accurate.
7. How are the amount paid back and total interest calculated?
The amount paid back is calculated by multiplying the monthly payment by the total number of payments. Total interest paid is calculated by subtracting the original loan principal from the total amount paid back.
8. Why are calculations stored in variables before being displayed?
Storing results in variables keeps code clean, readable, easy to debug, and satisfies course style rules by keeping complex math formulas out of cout statements.

COURSE STYLE RULES FOLLOWED

Meaningful lowercase variable names (e.g., loan_amount, interest_earned).

ALL_CAPS for named constants (e.g., PERCENT_CONVERSION, MONTHS_IN_YEAR).

Every calculation stored in a result variable before cout.

Four-space indentation inside main().

No unused variables or cluttered code.
