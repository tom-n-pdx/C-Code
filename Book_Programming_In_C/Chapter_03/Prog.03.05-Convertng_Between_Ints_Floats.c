//
// Prog 3.5 p. 37 Converting between Integers and Foats
//

#include <stdio.h>

int main (void)
{
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    // char c = 'a';

    i1 = f1;				                                        // Foat to int conversion
    printf("%f assigned to a integer produces %i\n", f1, i1);

    f1 = i2;				                                        // Int to float conversion
    printf("%i assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100;                                                              // int divided by integer
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2 = i2 / 100.0;		                                               // int divided by float
    printf("%i divided by 100.0 produces %f\n", i2, f2);

    f2 = (float) i2 / 100;				                       // Foat to int conversion
    printf("(float) %i divided by 100 produces %f\n", i2, f2);

}

