//double round(double x) 瀵逛簬double鍥涜垗浜斿叆鍙栨暣
#include<cstdio>
#include<cmath>
int main(void)
{
    double db1 = round(3.40);
    double db2 = round(3.45);
    double db3 = round(3.50);
    double db4 = round(3.55);
    double db5 = round(3.60);
    printf("%d %d %d %d %d",(int)db1, (int)db2,(int) db3,(int) db4,(int) db5);
    return 0;
}