//sprintf杩涢樁鐢ㄦ硶涓句緥
#include<stdio.h>
int main()
{
    int n = 12;
    double db = 3.1415;
    char str[100], str2[100] = "good";
    sprintf(str, "%d:%.2f,%s", n, db, str2); //浠庡彸寰€宸︼紝灏唅nt鍨嬪彉閲弉銆乨ouble鍨嬪彉閲廳b銆乧har鍨嬫暟缁剆tr2鎸�"%d:%.2f,%s"鐨勬牸寮忓啓鍒板瓧绗︽暟缁剆tr涓�
    printf("str=%s\n", str);
    return 0;
}