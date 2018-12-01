//getchar鍜宲utchar鍒嗗埆鐢ㄦ潵杈撳叆鍜岃緭鍑哄崟涓瓧绗�
#include<stdio.h>
int main()
{
    char str[5][5];
    for (int i= 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            str[i][j] = getchar();
            getchar();  //杩欏彞鏄负浜嗘妸杈撳叆涓瘡琛屾湯灏剧殑鎹㈣绗﹀惛鏀舵帀
        }
        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
                putchar(str[i][j]);
            }
            putchar('\n');
        }
    }
    return 0;
}