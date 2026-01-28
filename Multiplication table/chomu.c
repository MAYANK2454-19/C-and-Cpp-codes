#include<stdio.h>

int main()
{   int n;
    printf("Enter a Number to print table\n");
    scanf("%d",&n);

    printf("The table of given number is as follows:\n",n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,i*n);
    }
    return 0;
}
