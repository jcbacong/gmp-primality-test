#include <stdlib.h>
#include <gmp.h>
#include <stdio.h>

/**
 * Sample gmp code to test whether an integer is prime or not.
 * Uses mpz_probab_prime_p to compute for the primality (probabilistically)
 * of an integer with type mpz_t. 
 * Returns:
 * 2 -> prime
 * 1 -> probably prime
 * 0 -> composite
 * 
 * (c) jcbacong, 2019
 */

int main(int argc, char *argv[]) {
    mpz_t digit;
    int res;

    // Initalization
    mpz_init(digit);
    mpz_set_str(digit, argv[1], 10);

    // Operation
    res = mpz_probab_prime_p(digit, 50);


    // Results
    gmp_printf("======== Output ================\n[**] Input:  %Zd \n\n", digit);
    printf("[**] Result: %s \n================================\n", ((res==2)?"Prime":((res==0)?"Not Prime":"Possible (strong) Prime")));

    // Clear
    mpz_clear(digit);
    return 0;

}
