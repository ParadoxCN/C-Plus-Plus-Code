#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct linklist{
    char data[40];
    struct linklist* next;
}node;

node* Initlinklist(void){
    node* head;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    return head;
}

void Displaylinklist(node* head){
    if(head->next==NULL){
        printf("The list is empty!");
    }
    else{
        node* ptr=head->next;
        while(ptr){
            printf("%s\n",ptr->data);
            ptr=ptr->next;
        }
    }
}

node* Findlinklist(node* ptr,int index){
    if(ptr->next==NULL){
        printf("The linklist is empty!");
    }
    else{
        int pos=0;
        while(ptr&&pos!=index){
            ptr=ptr->next;
            pos++;
        }
        return ptr;
}
}

void DisplaylinklistObject(node* ptr,int index){
    node* DisplayLocation=Findlinklist(ptr,index);
    printf("%s\n",DisplayLocation->data);
}

void Insertlinklist(node* ptr,int index,char a[]){
    if(index<=0){
        printf("illegal Insert Location!");
        exit(1);
    }
    node* InsertLocation=Findlinklist(ptr,index);
    node* NewNode=(node*)malloc(sizeof(node));
    NewNode->next=InsertLocation->next;
    InsertLocation->next=NewNode;
    strcpy(NewNode->data,a);
    int i=strlen(NewNode->data);
    NewNode->data[i]='\n';
    NewNode->data[++i]='\0';

    }

void Deletelinklist(node* ptr,int index){
    if(index<1){
        printf("illegal Delete Location!");
        exit(1);
    }else if(index==1)
    {
        ptr->next=ptr->next->next;
        free(ptr->next);
    }else{
    node* DeleteNode=Findlinklist(ptr,index);
    node* PreNode=Findlinklist(ptr,index-1);
    PreNode->next=DeleteNode->next;
    free(DeleteNode);
    }
}

int main(int argc,char *argv[])
{
    FILE* fp = fopen("Lab1test.DAT","r+");
    if(fp==NULL)
    {
        printf("Error in opening file!\n");
        exit(1);
    }
    node* HeadNode=Initlinklist();
    node* pointer=HeadNode;
    while(!feof(fp))
    {
        //printf("%s",pointer->next);
        char buffer[40];
        if(fgets(buffer, 40, fp)==NULL) break;
        node* NewNode=(node*)malloc(sizeof(node));
        strcpy(NewNode->data,buffer);
        pointer->next=NewNode;
        pointer=NewNode;
        // printf("%p\n",&*NewNode);
        // printf("%p\n",&*(NewNode->next));
    }
    //  node* ptr=NULL;
    //  printf("%p",ptr);
    

    char option= argv[1][0];
    int location = atoi(&argv[1][1]);
    char *ptr1 = argv[2];
    switch(option)
    {
        case 'D':
            {Deletelinklist(HeadNode,location);
            Displaylinklist(HeadNode);
                break;}
        case 'P':
            {DisplaylinklistObject(HeadNode,location);
                break;}
        case 'I':
            {
                Insertlinklist(HeadNode, location, ptr1);
                Displaylinklist(HeadNode);
                break;}
        case 'X':
            {Displaylinklist(HeadNode);
                break;}
        default :
            printf("Please input right method!\n");
    }
    fclose(fp);
    return 0;
}
