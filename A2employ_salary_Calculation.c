#include <stdio.h>
int main() {
char name [50];
float Basic_Salary, HRA, DA, Gross_Salary, Income_Tax, Net_Salary;
printf("Enter Employee Name: ");
scanf("%s", &name);
printf("Enter Basic Salary: ");
scanf("%f", &Basic_Salary);
HRA = 0.20  * Basic_Salary;
// 20% of basic salary
DA = 0.10 * Basic_Salary;
// 10% of basic salary
Gross_Salary =  Basic_Salary + HRA + DA;
Income_Tax =  0.05 * Gross_Salary; 
// 5% of gross salary
Net_Salary = Gross_Salary -Income_Tax;
printf("\n Salary Details\n");
printf("Employee Name : %s\n", name);
printf("Basic Salary : %.2f\n", Basic_Salary);
printf("House Rent Allow. %.2f\n", HRA);
printf("Dearness Allow. : %.2f\n", DA);
printf("Gross Salary : %.2f\n", Gross_Salary);
printf("Income Tax (5%%) : %.2f\n", Income_Tax);
printf("Net Salary : %.2f\n", Net_Salary);
return 0;
}
/*
OUTPUT
Enter Employee Name: Bipasha 
Enter Basic Salary: 1500000

 Salary Details
Employee Name : Bipasha
Basic Salary : 1500000.00
House Rent Allow. 300000.00
Dearness Allow. : 150000.00
Gross Salary : 1950000.00
Income Tax (5%) : 97500.00
Net Salary : 1852500.00
*/