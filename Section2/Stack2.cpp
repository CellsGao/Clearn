/**
 * 堆栈的链式储存实现
 */



/*#include <iostream>
#include <stdio.h>

typedef struct SNode *Stack;
struct SNode{
    int Data;
    struct SNode *Next;
};

Stack creatStack(){
    //创建一个头结点,空栈
    Stack s;
    s=(Stack)malloc(sizeof(struct SNode));
    s->Next=NULL;
    return s;
}

int isEmpty(Stack s){
    return (s->Next==NULL);
}

void push(Stack s,int item){
    //将元素压入堆栈s（头结点之后）
    Stack tepCell;
    tepCell=(Stack)malloc(sizeof(struct SNode));
    tepCell->Data=item;
    tepCell->Next=s->Next;
    s->Next=tepCell;
}

int pop(Stack s){
    Stack firstCell;
    if(isEmpty(s)){
        printf("栈空");
    } else{
        firstCell=s->Next;
        s->Next=firstCell->Next;
        int topElement=firstCell->Data;
        free(firstCell);
        return topElement;
    }
}

//栈的遍历
void stackTraverse(Stack s){
    if(isEmpty(s)){
        printf("栈空");
    } else{
        Stack p;
        p=s;
        while (p){
            printf("%d ",p->Data);
            p=p->Next;
        }
    }
    printf("\n");
}


int main(){
    Stack  s=creatStack();
    for(int i=1;i<10;i++){
        push(s,i);
    }
    stackTraverse(s);
    pop(s);
    stackTraverse(s);
}

*/