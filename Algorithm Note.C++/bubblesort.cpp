//鍐掓场鎺掑簭灏嗗厓绱犲垎涓轰袱閮ㄥ垎锛氬凡缁忔帓搴忓拰灏氭湭鎺掑簭
#include<stdio.h>
int main()
{
    int a[10] = {3, 1, 4, 5, 2};
    for (int i = 1; i < 5;i++) //杩涜n-1瓒�
    {
        for (int j = 0; j < 5 - i;j++) //j鏄渶鍙宠竟宸茬粡瀹屾垚鎺掑簭鐨勫厓绱犱釜鏁�
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5;i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}