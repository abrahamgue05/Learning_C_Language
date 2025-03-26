/*
Author: Abraham Guerrero
Purpose: (Challenge) Create a simple Weather program.
Date: 20/02/25 DD/MM/YY
Instructions: 
- Program will find the total rainfall for each year, the average yearly rainfall.
- Past five years hard-code.
- 5 rows and 12 columns all float numbers.
- Print year, rainfall, average/year and average/month.
*/
#include <stdio.h>

int main() {

    float rain[5][12] = {
        {0.14, 0.81, 3.67, 1.03, 6.68, 4.10, 5.21, 11.94, 1.37, 1.35, 1.91, 1.50 },
        {1.18, 0.11, 2.86, 0.76, 7.48, 1.82, 4.55, 0.54, 1.24, 0.08, 1.16, 1.20},
        {3.37, 5.29, 6.06, 4.37, 2.43, 5.30, 4.17, 6.79, 0.99, 1.71, 4.23, 3.44},
        {7.23, 2.32, 5.44, 4.37, 1.57, 4.38, 1.73, 5.24, 1.29, 1.78, 2.01, 3.68},
        {6.44, 8.11, 9.43, 3.48, 5.79, 2.40, 3.35, 2.15, 11.48, 0.12, 3.57, 5.58},
    };
    int year, month;
    float subtot, total;

    printf("YEAR\t\tRAINFALL (inches)\n");
    for(year = 0, total = 0; year < 5; year++){// Goes through every year
        for (month = 0, subtot = 0; month < 12; month++){// Goes throuhg every month
            subtot += rain[year][month];// Gives subtot the sum of every month and year
        }
        printf("%5d \t%14.1f\n", 2020 + year, subtot);// Print year+1 and the sum per year
        total += subtot;// Gives the value of subtotal
    }

    printf("\nYearly average is %.2f inches. \n", total/5);//Total / 5 to get each year value
    printf("\nMonthly average:\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

    for (month = 0;month < 12; month++){// Goes through every mont
        for (year = 0, subtot; year < 5; year++){// Goes through every year
            subtot += rain[year][month];// Gives the subtot the sum of every month and year
        }
        printf("%.1f\t", subtot/5);// Print the total average per month
    }
    return 0;
}