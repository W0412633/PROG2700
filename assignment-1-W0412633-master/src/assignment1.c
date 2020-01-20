#import <stdio.h>

int main() {

    float hour_worked, hour_wage, pay_gross, pay_income, annual_income,
        annual_cpp, annual_ei, pay_federal_tax, pay_provincial_tax,
        pay_total_tax, pay_cpp, pay_ei, pay_net;
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
    printf("Enter your hourly wage: ");
    scanf("%f", &hour_wage);

    return 0;
}
