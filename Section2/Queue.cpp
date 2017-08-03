//
// Created by 高尚 on 2017/5/6.
//
#include <stdio.h>
#include <iostream>

struct QNode { //队列中的节点
    int Data;
    struct QNode *Next;
};
typedef struct QNode *QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
} *LinkQueue;

//初始化队列
void initQueue(LinkQueue q) {
    QueuePtr s = (QueuePtr) malloc(sizeof(QNode));   //定义一个头结点
    s->Next = NULL;
    q->front = q->rear = s;
}

//插入元素
void insertElem(LinkQueue q, int elem) {
    QueuePtr temp;
    temp = (QueuePtr) malloc(sizeof(QueuePtr));
    if (temp) {
        temp->Data = elem;
        temp->Next = NULL;
        q->rear->Next = temp; //主要是使front的Next指针可以向下指
        q->rear = temp;
    }

}

//判断是否为空
bool isEmpty(LinkQueue q) {
    return (q->front == NULL);
}

//删除元素
int delElem(LinkQueue q) {
    int elem;
    if (isEmpty(q)) {
        printf("队列为空");
    } else {
        QueuePtr temp;
        temp = q->front->Next;
        if (q->front == q->rear) { //队列只有一个元素
            q->front = q->rear = NULL;
        } else {
            elem = temp->Data;
            q->front->Next = temp->Next;
            free(temp);
            return elem;
        }
    }
}

int printQueue(LinkQueue q) {
    if (q->rear == q->front) {
        printf("队列满");
    } else {
        QueuePtr temp = q->front->Next;
        while (temp) {
            printf("%d ", temp->Data);
            temp = temp->Next;
        }
    }
    printf("\n");
}

int main() {
    LinkQueue q;
    initQueue(q);
    for (int i = 0; i < 10; i++) {
        insertElem(q, i);
    }
    printQueue(q);
    delElem(q);
    printQueue(q);

}





