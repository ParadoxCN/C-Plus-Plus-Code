//瀹炵幇鎸囬拡鍑忔硶
#include<stdio.h>
int main()
{
    int a[10] = {1, 4, 9, 16, 25, 36, 49};
    int *p = a;
    int *q = &a[5];
    printf("q=%d\n", q);
    printf("p=%d\n",p);
    printf("q-p=%p\n", q - p);//缂栬瘧鍣ㄤ笉鏀寔浠�%d鏄剧ず鎸囬拡鍦板潃锛屽簲閲囩敤%p
    return 0;
}
/*
q=6422068
p=6422048
q-p=0000000000000005 //6422068-6422048=20锛宨nt涓�4涓瓧鑺傦紝20/4=5锛�
*/