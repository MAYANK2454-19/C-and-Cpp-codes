#include <stdio.h>
int main()
{
    // Define Subjects
    char Science, Maths;
    // Define Status
    int Pass, Fail;
    Pass = 1;
    Fail = 0;
    printf("FOR PASS USE %d & FAIL USE %d\n",Pass,Fail);
    printf("Enter Your Status in Science\n");
    scanf("%d", &Science);
    switch (Science)
    {
    case 1:
        /* code */
        printf("Enter Your Status in Maths\n");
        scanf("%d", &Maths);

        switch (Maths)
        {
        case 1:
            /* code */
            printf("Congratulations!!! You are Rewarded with 45Rs\n");
            break;
        case 0:
            /* code */
            printf("Congratulations!!! You are Rewarded with 15Rs\n");
            break;
        default:
            break;
        }
        break;
    case 0:
        /* code */
        printf("Enter Your Status in Maths\n");
        scanf("%d", &Maths);
        switch (Maths)
        {
        case 1:
            /* code */
            printf("Congratulations!!! You are Rewarded with 15Rs\n");
            break;
        case 0:
            /* code */
            printf("Padh le bhaiii!!!\n");
            break;
        default:
            break;
        }
    }

    /* code */
    return 0;
}
