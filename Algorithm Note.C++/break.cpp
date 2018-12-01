//break绀轰緥
#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i = 1; i <= 100;i++)
    {
        sum = sum + i;
        if(sum>=2000)
            break;
    }
    printf("sum=%d\n", sum);
    return 0;
}
