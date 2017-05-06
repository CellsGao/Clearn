/**
 * 堆栈的顺序储存实现
 */


/*#include <iostream>
#include <stdio.h>
#define  maxSize



typedef struct SDNode *Stack;
struct SDNode{
    int Data[maxSize];
    int Top1; //堆栈1的栈顶，栈空时Top1=-1
    int Top2; //堆栈2的栈顶，栈空时Top2=maxSize
};

void push(Stack s,int item,int tag){ //tag=1、2为区分两个堆栈的标志
    if(s->Top2-s->Top1==1){
        printf("栈满");
    }
    if(tag==1){
        s->Data[++(s->Top1)]=item; //对第一个堆栈的操作
    } else{
        s->Data[--(s->Top2)]=item; //对第二个堆栈的操作
    }
}

int pop(Stack s,int tag){
    if(tag==1){               //判断堆栈操作
        if(s->Top1==-1){
            printf("栈1空");
        } else{
            return s->Data[(s->Top1)--];
        }
    } else{
        if(s->Top2==maxSize){
            printf("栈2空");
        } else{
            return s->Data[(s->Top2)++];
        }
    }
}
*/
