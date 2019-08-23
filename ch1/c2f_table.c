#include <stdio.h>

/* print F to C table*/

main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower = 0;      /* lower limit temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("%3s %7s","C","F\n");

    celsius = lower;   /* auto convert to float */
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
}
