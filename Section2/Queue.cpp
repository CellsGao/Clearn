//
// Created by 高尚 on 2017/5/6.
//
#include <stdio.h>
#include <iostream>

struct Node{ //队列中的节点
    int Data;
    struct Node *Next;
};
struct QNode{   //链队列结构
    struct Node *front;  //队列头
    struct Node *rear;   //队列尾
};
typedef QNode *Queue;
typedef Node *toNode;


bool isEmpty(Queue q){
    return (q->front==NULL);
}

//初始化队列
Queue initQueue(Queue q){
    q->front=q->rear=(toNode)malloc(sizeof(toNode));
    q->front=q->rear=NULL;
}

//入队操作
void insertElem(Queue q,int elem){

}

//删除操作
int delElem(Queue q){
    toNode frontCell;
    int frontElem;
    if(isEmpty(q)){
        printf("队列满");
    }
    frontCell=q->front;
    if(q->front==q->rear){  //判断是否只有一个元素
        q->rear=q->front=NULL;
    } else{
        q->front=q->front->Next;
    }
    frontElem=frontCell->Data;
    free(frontCell);
    return frontElem;

}




