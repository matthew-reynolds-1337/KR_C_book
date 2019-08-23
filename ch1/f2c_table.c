#include <stdio.h>

/* print F to C table*/

main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower = 0;      /* lower limit temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("%3s %7s","F","C\n");

    fahr = lower;   /* auto convert to float */
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
}
