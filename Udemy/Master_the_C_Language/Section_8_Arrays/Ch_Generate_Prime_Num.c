/*
Author: Abraham Guerrero
Purspose: (Challenge) Generate a prime number
Date: 20/02/25 DD/MM/YY
Instuction: In an array store al prime numbers from 0 to 100.
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int p, i;
    int primes[50]; // Array to store prime numbers
    int primeIndex = 0; // Keeps track of the number of primes found

    primes[primeIndex++] = 2;// Hardcode the first num

    for (p = 3; p <= 100; p += 2) { // Check for prime numbers up to 100
        bool isPrime = true;
        
        for (i = 0; primes[i] * primes[i] <= p; i++) {// Check divisibility only by previously found primes up to sqrt(p)
            if (p % primes[i] == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            primes[primeIndex++] = p;
        }
    }

    for (i = 0; i < primeIndex; i++) {
        printf("%d ", primes[i]);// Print out the primes found
    }
    printf("\n");

    return 0;
}
