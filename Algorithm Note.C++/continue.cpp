//continue绀轰緥
#include<stdio.h>
int main()
{
    int sum=0;
    for (int i = 1; i <= 5;i++)
    {
        if(i%2==1)
            continue;
        sum = sum + i;
    }
    printf("sum=%d\n", sum);
    return 0;
}