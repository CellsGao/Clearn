/**
 * 链表的实现
 */
/*#include <stdio.h>
#include <stdlib.h>
#include <iostream>


typedef struct Lnode{
    int Data;
    struct Lnode *Next;
} Lnode;
typedef Lnode *LinkList;

//单链表的创建,随机产生n个随机数,建立带头结点的单链表
LinkList creatListHead(int n){
    LinkList l;
    LinkList p;
    int i;
    srand(time(0)); //随机种子
    l=(LinkList)malloc(sizeof(Lnode)); // 建立链表
    l->Next=NULL; // 定义一个头结点
    for(i=0;i<n;i++){ //生成节点
        p=(LinkList)malloc(sizeof(Lnode));
        p->Data=rand()%100+1; //100以内的随机数
        p->Next=l->Next;
        l->Next=p;
    }
    return l;


}

//遍历链表
void listTraverse(LinkList l){
    if(l->Next==NULL){
        printf("链表为空");
    } else{
        LinkList p;
        p=l;
        while(p!=NULL){
            printf("%d ",p->Data);
            p=p->Next;
        }
    }

    printf("\n");
}


//获取链表长度
void getLength(LinkList l){
    int i=0;//计数器
    while(l->Next){
        l=l->Next;
        i++;
    }
    printf("链表长度为%d",i);
    printf("\n");
}

//链表查找，查找第i个值
LinkList getElem(LinkList l,int i){ //待修该
    //LinkList p=l;
    int j=0;
    while (l&&j<i){
        l=l->Next;
        j++;
    }
    if(!l){
        std::cout<<"查找不存在"<<std::endl;
    }
    else {
        int final = 0;
        final = l->Data;
        printf("第%d个位置是%d", i, final);
        printf("\n");
    }
    return l;
}

//链表查找，查找特定数值
LinkList findElem(LinkList l,int e){
    LinkList p=l;
    int i=1;
    while(p&&p->Data!=e){
        p=p->Next;
        i++;
    }
    if(!p){
        printf("查找不存在\n");
    }
    else{
        printf("%d位于%d个位置",e,i);
    }
    return p;
}


//链表删除,删除第i+1个元素
void delElem(LinkList *l,int i){
    LinkList p,s;

    if(i==0){
        p=*l;
        *l=(*l)->Next;
        free(p);
    }else{
        p=getElem(*l,i-1);
        s=p->Next;
        p->Next=s->Next;
        free(s);
    }
}

int main(){
    LinkList l=creatListHead(10);
    listTraverse(l);
    delElem(&l,0);
    listTraverse(l);
}

*/

