#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ListSize 20

typedef struct
{
    char data[ListSize][30];
    int length;
}SeqList,*PSeqList;


void InitList(PSeqList L)
{
    if(L==NULL)
    {
        return;
    }
    L->length=0;
}

int PrintList(PSeqList L)
{
    for (int n = 0; n < L->length;n++)
        puts(L->data[n]);
    return 0;
}

int GetData(PSeqList L,int i)
{
    if(i<0||i>L->length)
    {
        printf("wrong location to getdata!\n");
        return 0;
    }
    else
    {
        puts(L->data[i-1]);
    }
    return 0;
}

int InsertList(PSeqList L, int i, char* buffer_ptr)
{
    if(i<1||i>L->length)
    {
        printf("illegal inserting location\n");
        return 0;
    }
    else if(L->length>=ListSize)
    {
        printf("list has been full!\n");
        return 0;
    }
    else{
       int m = L->length;

       for (int n =m-1; n >= i - 1; n--)
       {
           char *p = L->data[n];
           char *q = L->data[n-1];
           strcpy(p, q);
        }
        char *p = L->data[i - 1];
        strcpy(p, buffer_ptr);
        L->length++;
    }
    PrintList(L);
    return 0;
}

int DeleteList(PSeqList L,int i)
{
    if(i<1||i>L->length)
    {
        printf("delete location illegal!\n");
        return 0;
    }
    else{
        for (int n = i; n < L->length;n++)
        {
            char *p = L->data[n - 1];
            char *q = L->data[n];
            strcpy(p,q);
        }
        L->length--;
    }
    PrintList(L);
    return 0;
}



int main(int argc,char *argv[])
{
    FILE* fp = fopen("Lab1test.DAT","r+");
    if(fp==NULL)
    {
        printf("Error in opening file!\n");
        return 0;
    }
    SeqList *list = (SeqList *)malloc(sizeof(SeqList));
    InitList(list);
    int i = 0;
    while((!feof(fp))&&i<ListSize)
    {
        fgets(list->data[i], 40, fp);
        printf("%p\n",&list->data[i]);
        i++;
        list->length++;
    }
    
    char option= argv[1][0];

    int location = atoi(&argv[1][1]);
    char *ptr = argv[2];
    switch(option)
    {
        case 'D':
            {DeleteList(list,location);
                break;}
        case 'P':
            {GetData(list, location);
                break;}
        case 'I':
            {
                printf("%s\n", ptr);
                InsertList(list, location, ptr);
                break;}
        case 'X':
            {PrintList(list);
                break;}
        default :
            printf("Please input right method!\n");
    }
    fclose(fp);
    return 0;
}
