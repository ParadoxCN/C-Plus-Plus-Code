#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    swap(p1, p2);
    printf("a=%d,b=%d\n", *p1, *p2);
    return 0;
}
/*閿欒鍐欐硶
void swap(int *a,int *b)
{
    int *temp;  //temp鎸囬拡鏈垵濮嬪寲锛屽瓨鏀剧殑鍦板潃鏄殢鏈虹殑锛屾敞鎰忔寚閽堝垵濮嬪寲闂锛�
    *temp=*a;
    *a=*b;
    *b=*temp;
}
*/