#include <stdio.h>
int main()                                                                                                    
{                                         
    /* code */                                         
    int a;                                         

    printf("Enter Your Number\n");
    scanf("%d", &a);

    printf("The Table of %d as Follows\n",a);
    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
