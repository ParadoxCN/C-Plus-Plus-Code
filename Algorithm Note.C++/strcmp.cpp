
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    int cmp = strcmp(str1, str2);
    if(cmp<0)
        printf("str1<str2\n");//strcmp杩斿洖缁撴灉涓鸿礋鏁帮紝鍒欏墠鑰呭皬浜庡悗鑰�?
        else if(cmp>0)
            printf("str1>str2\n");//strcmp杩斿洖缁撴灉涓烘鏁帮紝鍒欏墠鑰呭ぇ浜庡悗鑰�?
            else
                printf("str1==str2\n");//strcmp杩斿洖缁撴灉涓�0锛屽垯鍓嶅悗涓よ€呯浉鍚�?
            return 0;
}