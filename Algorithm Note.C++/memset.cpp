/*鏁扮粍鍒濆鍖栧嚱鏁� memset(name,num,sizeof(name))锛屽ご鏂囦欢string.h
memset浣跨敤鐨勬槸鎸夊瓧鑺傝祴鍊硷紝鍗冲姣忎釜瀛楄妭璧嬪悓鏍风殑鍊�
杩欐牱缁勬垚int鐨�4涓瓧鑺備細琚祴鎴愮浉鍚岀殑鍊�
鏄互琛ョ爜褰㈠紡杩涜璧嬪€硷紝0鍜�-1鐨勪簩杩涘埗琛ョ爜涓哄叏0鍜屽叏1锛屼笉鏄撳嚭閿�
鍥犳瀵规暟缁勮祴鍏朵粬鏁板瓧锛屼娇鐢╢ill锛岃€屼笉浣跨敤memset*/
#include<cstdio>
#include<cstring>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5;i++)
    {
        printf("%d", a[i]);
    }
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5;i++)
    {
        printf("%d", a[i]);
    }
    memset(a, 1, sizeof(a));
    for (int i = 0; i < 5;i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}