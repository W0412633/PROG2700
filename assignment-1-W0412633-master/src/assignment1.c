// Assignment 1
// Jake Edwards

/*  This program receives input from the user, their hourly wage and hours worked.
    It then calculates their  biweekly gross and vacation pay, annual pay, annual CPP and EI
    contributions, their taxes deducted for their biweekly pay, their CPP and EI
    contributions for their biweekly pay, and their net biweekly pay. */

#include <stdio.h>

int main() {

    // Assigning all variables that contain non-constant values
    float hour_worked, hour_wage, pay_gross, pay_vacation, pay_income,
        annual_income, annual_cpp, annual_ei, pay_federal_tax,
        pay_provincial_tax, pay_total_tax, pay_cpp, pay_ei, pay_net;

    // Assigning variables with constant values
    // Number of pay periods per year
    int annual_pay_period = 26;
    // Vacation pay percentage added to gross pay
    float vacation_percentage = 0.04f;
    // Personal amounts that are deducted from taxable income
    float amount_employment = 1245.0f;
    float amount_cpp = 3500.0f;
    float amount_federal = 13229.0f;
    float amount_provincial = 11481.0f;
    // Deductible percentages for tax rates and CPP/EI
    float deductible_federal = 0.15f;
    float deductible_provincial = 0.0848f;
    float deductible_cpp = 0.0525f;
    float deductible_ei = 0.0158f;



    // Welcome user and collect their hourly wage and hours worked
    printf("\nWelcome to the paycheque calculator!\n\n");
    printf("Enter the number of hours worked: ");
    scanf("%f", &hour_worked);
    printf("Enter your hourly wage: $");
    scanf("%f", &hour_wage);


    // Calculate pay information
    // Calculate biweekly gross pay, vacation pay and total income
    pay_gross = hour_worked * hour_wage;
    pay_vacation = pay_gross * vacation_percentage;
    pay_income = pay_gross + pay_vacation;

    // Calculate annual income and CPP/EI contributions
    annual_income = pay_income * annual_pay_period;
    annual_cpp = (annual_income - amount_cpp) * deductible_cpp;
    annual_ei = annual_income * deductible_ei;

    // Calculate biweekly federal and provincial tax owed, and combined tax owed
    pay_federal_tax = (annual_income - amount_federal - annual_ei - annual_cpp - amount_employment)
            * deductible_federal / annual_pay_period;
    pay_provincial_tax = (annual_income - annual_cpp - annual_ei - amount_provincial)
            * deductible_provincial / annual_pay_period;
    pay_total_tax = pay_federal_tax + pay_provincial_tax;

    // Calculate biweekly CPP/EI contributions
    pay_cpp = annual_cpp / annual_pay_period;
    pay_ei = annual_ei / annual_pay_period;

    // Calculate net biweekly pay
    pay_net = pay_income - pay_total_tax - pay_cpp - pay_ei;



    // Print gross pay information
    printf("\nGross Pay: \t$%0.2f\n", pay_gross);
    printf("Vacation: \t$%0.2f\n", pay_vacation);
    printf("Total Income: \t$%0.2f\n", pay_income);

    // Print annual income information
    printf("\nAnnual Income: \t$%0.2f\n", annual_income);
    printf("Annual CPP: \t$%0.2f\n", annual_cpp);
    printf("Annual EI: \t$%0.2f\n", annual_ei);

    // Print biweekly tax information
    printf("\nFederal Tax: \t$%0.2f\n", pay_federal_tax);
    printf("Provincial Tax: $%0.2f\n", pay_provincial_tax);
    printf("Total Tax: \t$%0.2f\n", pay_total_tax);

    // Print biweekly CPP/EI information
    printf("\nCPP: \t\t$%0.2f\n", pay_cpp);
    printf("EI: \t\t$%0.2f\n", pay_ei);

    // Print biweekly net pay
    printf("\nNet Pay: \t$%0.2f\n", pay_net);

    return 0;
}
