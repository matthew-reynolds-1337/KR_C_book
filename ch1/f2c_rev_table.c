#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

main()
{
    int fahr;

    printf("%3s %7s","F","C\n");

    for (fahr=300; fahr>=0; fahr=fahr-STEP)
        printf("%3.0d %6.1f\n",fahr,(5.0/9.0)*(fahr-32.0));

}
