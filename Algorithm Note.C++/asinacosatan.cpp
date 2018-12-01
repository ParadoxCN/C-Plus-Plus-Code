//arcsin(double x) acos(double x) atan(double x)
#include<cstdio>
#include<cmath>
int main(void)
{
    double db1 = asin(1);
    double db2 = acos(-1.0);
    double db3 = atan(0);
    printf("%f %f %f", db1, db2, db3);
    getchar();
    return 0;
}