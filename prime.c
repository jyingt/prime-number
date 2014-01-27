#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// determine if number is a prime number
int isPrime(int num)
{
    int ii;

    // check if number is even
    if (num % 2 == 0)
        return 0;

    // check divisibility by odd numbers from 3..n^(1/2)
    for (ii = 3; ii <= sqrt(num); ii += 2)
        if (num % ii == 0)
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
    int i, num, count;
    char buffer[256];

    if (argc == 3) {
        num = atoi(argv[1]);
        count = atoi(argv[2]);
    }
    else {
        printf("Enter starting number: ");
        fgets(buffer, 256, stdin);
        num = strtol(buffer, NULL, 10);

        printf("Enter # of primes to list: ");
        fgets(buffer, 256, stdin);
        count = strtol(buffer, NULL, 10);
    }

    for (i = 0; i < count; i++) {
        printf("Prime number after %d is %d.\n", i, nextPrimeNumber(i));
    }
}
