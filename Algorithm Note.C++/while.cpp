//while璇彞鐨勭ず渚�
#include<stdio.h>
int  main()
{
    int n = 1, sum = 0;
    while(n<=100)
    {
        sum = sum + n;
        n++;
    }
    printf("sum=%d\n", sum);
    return 0;
}