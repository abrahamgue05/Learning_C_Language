/*
Author: Abraham Guerrero
Purspose: (Challenge) Determinate amount of Pay. 
Date: 19/02.25 DD/MM/YY
Instructions: Ask the user for hours, program should display: Gross pay, taxes, 
and net payment.
Basic pay rate: $12.00/hr extra hours(+40hrs) are $18.00/hr
Tax rate: 15% of the first $12 to $300, 20% of $300 to $450, over $450 you pay
the other taxes plus a 25%.
Use if else statements. 
*/
#include <stdio.h>

int main() {

    float hrs, payment, extHrs, tax, exTax;// hrs set to float for 1.5 hours or 1.25 or more.
    //float netPay = payment - tax;// It won't take this calculation as it is above

    printf("Enter the hours worked this week: ");
    scanf("%f", &hrs);// Set hours 
  
    if(hrs <= 40.00){
        payment = hrs * 12.00;// Hours work * 12
        printf("Your payment is: %g\n", payment);
    }else{
        extHrs = hrs - 40; // Take the extra hours worked
        payment = ((extHrs * 18) + ((hrs - extHrs) * 12));// extra hours * 18 + hours worked * 12
        printf("Your payment with the extra hours is: %g\n", payment); 
    }

    if(payment <= 300){
        tax = payment * .15;// 15% tax
        printf("Your taxes are: %g\n", tax);
        printf("Your net payment this week is: %g\n", payment - tax);
    }else if(payment > 300 && payment <= 450){// Checks if payment is more than 300 and less than 450
        tax = 300 * .15;// 15% * 300 first payment
        tax += (payment - 300) * .2;// Tax of the extra payment
        printf("Your taxes are: %g\n", tax); 
        printf("Your net payment this week is: %g\n", payment - tax);
    }else{
        tax = 300 * .15;// 300 first payment * 15% 
        tax += 150 * .2;// Tax of the extra payment
        exTax = tax + ((payment - 450) * .25);// Extra taxs of being more pay that 450
        printf("Your taxes are: %g\n", exTax);
        printf("Your net payment this week is: %g\n", payment - exTax); 
    }

    return 0;
}