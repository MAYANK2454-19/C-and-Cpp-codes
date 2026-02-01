#include <stdio.h>
int main()
{
    /* code */
    float a,b;
    printf(
        "Enter number a\n" 
    );
    scanf(
        "%f",&a
    );
    
    printf(
        "Enter number b\n"
    );
    scanf(
        "%f",&b
    );
    printf(
        "The sum is %f\n", 100*a/b
    );
    return 0;
}
