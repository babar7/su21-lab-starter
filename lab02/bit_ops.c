#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
int n1;
n1=x>>n & 1;
    /* YOUR CODE HERE */
    return n1; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    if(v==0)
    {*x=~(1<<n)  & (*x) ;}
    else if(v==1)
    {*x=(1<<n)  | (*x) ;}
     
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
   *x=*x ^ (1<<n); 
}

