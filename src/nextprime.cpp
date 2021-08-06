#include "nextprime.h"

int nextPrime(int p) {
    if (p<2) {
        return 2;
    }
    p++;
    if (p%2==0) {
        p++;
    }
    while (true) { // endless loop
        bool isPrime = true;
        for (int d=3; d*d<=p; d+=2) {  // start with d=3, as long as d*d<=p, at the end add 2
            if (p % d == 0) {   // divisor found
                isPrime = false;        // not prime stop for loop
                break;
            }
        }
        if (isPrime) {    // stop while loop
            break;
        }
        p+=2;   // otherwise check next candidate
    }
    return p;   // return result
}