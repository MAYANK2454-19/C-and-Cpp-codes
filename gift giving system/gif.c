#include <stdio.h>
int main()
{
    /*Introduce Subjects*/
    char Science, Maths;
    /*Define Subject Status*/
    int Pass=1;
    int Fail=0;
    printf("Status of Subjects for Pass = %d & for Fail = %d:\n", Pass,Fail);
    printf("Status of Science and Maths:\n");
    scanf("%d,%d",&Science,&Maths);
    if (Science=1,Maths=1)
    {
        /* code */
        printf("CONGRATULATIONS!!!, You are Rewarded with 45Rs Gift Card.");
    }
    else if (Science=1,Maths=0)
    {
        /* code */
        printf("CONGRATULATIONS!!!, You are Rewarded with 15Rs Gift Card.");
    }
    else  if (Science=0,Maths=1)
    {
        /* code */
        printf("CONGRATULATIONS!!!, You are Rewarded with 15Rs Gift Card.");
    }
    else 
    {
        /* code */
        printf("BSDWALE!!! PADHAI KRRR!!!");
    }
    
     
    /* code */
    return 0;
}
