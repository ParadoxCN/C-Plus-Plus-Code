#include<stdio.h>
int main()
{
    char str[15] = {'G', 'o', 'o', 'd', ' ', 's', 't', 'o', 'r', 'y', '!'};//鍙互鍜屾櫘閫氭暟缁勪竴鏍风殑鏂瑰紡閫愪釜鍏冪礌鍒濆鍖�
    for (int i = 0; i < 11;i++)
    {
        printf("%c", str[i]);
    }
    for (int i = 0; i < 15;i++)//杈撳嚭缁撴灉涓巌<11鏃剁浉鍚�
    {
        printf("%c", str[i]);
    }
    for (int i = 11; i < 15;i++)//娴嬭瘯鏈垵濮嬪寲閮ㄥ垎鐨勫唴瀹癸紝涓虹┖
    {
        printf("%c", str[i]);
    }
    char str1[15] = "Good Story!";
    for (int i = 0; i < 11;i++)
    {
        printf("%c", str1[i]);
    }//杈撳嚭缁撴灉锛欸ood story!Good story!        Good Story!
    /*char str[15] ="REINITIALIZE TEST";
    for (int i = 0; i < 15;i++)
    {
        printf("%c", str[i]);
    }鏁扮粍鍒濆鍖栧悗涓嶅彲鍐嶆鍒濆鍖�*/
    return 0;
}