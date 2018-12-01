/*甯哥敤Math鍑芥暟锛宼an(double x)銆乧os(double x)銆乻in(double x)*/
#include<cstdio>
#include<cmath>
//using namespace std;
const double pi = acos(-1.0);
int main(void)
{
    double db1 = sin(pi * 45 / 180);
    double db2 = cos(pi * 45 / 180);
    double db3 = tan(pi * 45 / 180);
    printf("%f %f %f\n", db1, db2, db3);
    return 0;
}