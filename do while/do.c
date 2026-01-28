#include <stdio.h>
int main()
{
    /* code */
    int index;
    int Number;
    index = 0;
    printf("Enter Your Number\n");
    scanf("%d", &Number);
    do
    {
        /* code */
        index = index + 1;
        printf("%d ", index);

    } while (index < Number);

    return 0;
}
