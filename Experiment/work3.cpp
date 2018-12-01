#include <Windows.h>
#include <stdio.h>

double getFac(int n){
    if(n==1){
        return 1;
        } 
    return n*getFac(n-1);
    }
double getSum(int n){
    if(n<0) return -1;
    if(n==0) return 0;
    else return getFac(n) + getSum(n-1);
    }
int main(int argc, char* argv[])
{
    LARGE_INTEGER nBeginTime;
    LARGE_INTEGER nEndTime;
    LARGE_INTEGER nFreq;
    int n;
    scanf("%d",&n);
    QueryPerformanceFrequency(&nFreq);
    QueryPerformanceCounter(&nBeginTime); 
    getSum(n);
    QueryPerformanceCounter(&nEndTime); 
    printf("N = %d,run_time:%f us\n",n, 1000000*(double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart); 
    return 0;
}