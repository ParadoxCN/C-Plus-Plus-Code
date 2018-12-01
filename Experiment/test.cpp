#include <windows.h>
#include <stdio.h>

double bp[10024] = {0};

double RcursiveSum(int n)
{
    if (bp[n] != 0)
        return bp[n];

    if (n == 1)
    {
        bp[1] = 1;
        return 1;
    }
    else if (n == 2)
    {
        bp[2] = 3;
        return 3;
    }
    else
    {
        double res = (n + 1) * RcursiveSum(n - 1) - n * RcursiveSum(n - 2);
        bp[n] = res;
        return res;
    }
}

int main()
{
    LARGE_INTEGER nFreq;
    LARGE_INTEGER nBeginTime;
    LARGE_INTEGER nEndTime;
    double time;
    int limit;
    int CycleIndex;
    printf("Please input limit:\n");
    scanf("%d", &limit);
    printf("Please input CycleIndex:\n");
    scanf("%d", &CycleIndex);
    QueryPerformanceFrequency(&nFreq);
    QueryPerformanceCounter(&nBeginTime);
    for (int i = 1; i <= CycleIndex; i++)
    {
        RcursiveSum(limit);
    }
    QueryPerformanceCounter(&nEndTime);
    time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;
    printf("While limit = %d,CycleIndex = %d,time is %lf ms", limit, CycleIndex, 1000 * time);
}