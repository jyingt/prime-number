#include <stdio.h>
#include <math.h>

// determine if number is a prime number
int isPrime(int num)
{
    // check from 2..n^(1/2)
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;

    return 1;
}

// get next prime number from input
int nextPrimeNumber(int num)
{
    while(!isPrime(++num));
    
    return num;
}

// unit test
int main(int argc, char **argv)
{
    for (int i = 0; i < 50; i++) {
        printf("Prime number after %d is %d.\n", i, nextPrimeNumber(i));
        //printf("%d: %d, %d\n", i, isPrime(i), nextPrimeNumber(i));
    }
}