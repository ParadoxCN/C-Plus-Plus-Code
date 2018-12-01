//鍖呭惈鍦╯tdio.h鏂囦欢涓�
//sprintf=string+printf
#include<stdio.h>
int main()
{
    int n = 233;
    char str[100];
    sprintf(str, "%d", n);  //鎶妌浠� "%d"鏍煎紡鍐欏叆鍒皊tr瀛楃鏁扮粍涓紙涓巔rintf鍚岄『搴忥紝浠庡彸寰€宸︼級
    printf("%s\n", str);
    return 0;
}
