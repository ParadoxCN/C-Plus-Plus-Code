//鍖呭惈鍦╯tdio.h鏂囦欢涓�
//sscanf=string+scanf
#include<stdio.h>
int main()
{
    int n;
    char str[100] = "123";
    sscanf(str, "%d", &n);  //鎶婂瓧绗︽暟缁剆tr涓殑鍐呭浠� "%d"鐨勬牸寮忓啓鍒皀涓紙涓巗canf鍚岄『搴忎粠宸﹁嚦鍙筹級
    printf("%d\n", n);
    return 0;
}