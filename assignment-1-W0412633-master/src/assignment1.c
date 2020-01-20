#include <stdio.h>

int main() {

    float hour_worked, hour_wage, pay_gross, pay_vacation, pay_income,
        annual_income, annual_cpp, annual_ei, pay_federal_tax,
        pay_provincial_tax, pay_total_tax, pay_cpp, pay_ei, pay_net;

    int annual_pay_period = 26;
    float vacation_percentage = 0.04f;
    float amount_employment = 1245.0f;
    float amount_cpp = 3500.0f;
    float amount_federal = 13229.0f;
    float amount_provincial = 11481.0f;
    float deductible_federal = 0.15f;
    float deductible_provincial = 0.0848f;
    float deductible_cpp = 0.0525f;
    float deductible_ei = 0.0158f;



    printf("\nWelcome to the *incredible* paycheque calculator!\n\n");
    printf("Enter the number of hours worked: ");
    scanf("%f", &hour_worked);
    printf("Enter your hourly wage: $");
    scanf("%f", &hour_wage);



    pay_gross = hour_worked * hour_wage;
    pay_vacation = pay_gross * vacation_percentage;
    pay_income = pay_gross + pay_vacation;

    annual_income = pay_income * annual_pay_period;
    annual_cpp = (annual_income - amount_cpp) * deductible_cpp;
    annual_ei = annual_income * deductible_ei;

    pay_federal_tax = (annual_income - amount_federal - annual_ei - annual_cpp - amount_employment)
            * deductible_federal / annual_pay_period;
    pay_provincial_tax = (annual_income - annual_cpp - annual_ei - amount_provincial)
            * deductible_provincial / annual_pay_period;
    pay_total_tax = pay_federal_tax + pay_provincial_tax;

    pay_cpp = annual_cpp / annual_pay_period;
    pay_ei = annual_ei / annual_pay_period;

    pay_net = pay_income - pay_total_tax - pay_cpp - pay_ei;



    printf("\nGross Pay: \t$%0.2f\n", pay_gross);
    printf("Vacation: \t$%0.2f\n", pay_vacation);
    printf("Total Income: \t$%0.2f\n", pay_income);

    printf("\nAnnual Income: \t$%0.2f\n", annual_income);
    printf("Annual CPP: \t$%0.2f\n", annual_cpp);
    printf("Annual EI: \t$%0.2f\n", annual_ei);

    printf("\nFederal Tax: \t$%0.2f\n", pay_federal_tax);
    printf("Provincial Tax: $%0.2f\n", pay_provincial_tax);
    printf("Total Tax: \t$%0.2f\n", pay_total_tax);

    printf("\nCPP: \t\t$%0.2f\n", pay_cpp);
    printf("EI: \t\t$%0.2f\n", pay_ei);

    printf("\nNet Pay: \t$%0.2f\n", pay_net);

    return 0;
}
