//
// Created by 高尚 on 2017/5/10.
//
#include <iostream>
#include <stdio.h>

struct TreeNode{ //数节点定义
    int Data;
    struct TreeNode *right;
    struct TreeNode *left;

};
typedef TreeNode *BinTree;

/**
 * 非递归遍历需要使用的堆栈(链式栈)
 */

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



//先序遍历递归 ：先根节点，再左子树后右子树
void PreOrderTraversal(BinTree bt){
    if(bt){
        printf("%d",bt->Data);
        PreOrderTraversal(bt->left);
        PreOrderTraversal(bt->right);
    }
}

//中序遍历递归：先左子树，后根节点，最后右子树.
void InOrderTraversal(BinTree bt){
    if(bt){
        InOrderTraversal(bt->left);
        printf("%d",bt->Data);
        InOrderTraversal(bt->right);
    }
}

//后序遍历递归：先左右后，最后根节点
void PostOrderTraversal(BinTree bt){
    if(bt){
        PostOrderTraversal(bt->left);
        PostOrderTraversal(bt->right);
        printf("%d",bt->Data);
    }
}

//使用堆栈进行中序非递归遍历
void traversalInOrder(BinTree bt){
    Stack s=creatStack();
    BinTree t=bt;
    while (t||isEmpty(s)){
        push(s,t->Data);
        t=t->left;
    }
    if(!isEmpty(s)){
        t=(BinTree)pop(s);
        printf("%d",t->Data);
        t=t->right;
    }
}