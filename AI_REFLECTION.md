AI Reflection

Tools Used

I used Gemini. My main purpose was to get a quick refresher on how setprecision works and to double check my code against all lab guidelines before submitting.

One Decision

The AI originally suggested combining entire formulas inside the cout statements to make the code shorter. I rejected this idea and changed it because course styling rules state that every calculation must be stored in a result variable before being printed. Storing intermediate steps in separate variables like rate_growth_factor made the code much easier to read and debug.

Verification

To verify my work, I ran compound_interest.cpp in OnlineGDB with the assigned inputs of $1,000 principal, 4.25% annual rate, and 12 compounding periods. The program outputted exactly $43.34 in interest earned and $1,043.34 in total savings. I also ran both files in OnlineGDB using the C++17 setting to make sure my code compiled and ran with zero errors or warnings.

Learning

I can now set up formatted output using fixed, setprecision(2), and setw to create aligned text columns for currency without help. I still need to practice breaking down complex math formulas with exponents into step-by-step C++ variables on my own.
