//
// Created by GJC on 2022/11/24.
//

#ifndef DATASTRUCTUREEXERCISE_LINKLIST_H
#define DATASTRUCTUREEXERCISE_LINKLIST_H

#include "Define.h"
#include <cstdlib>
#include <iostream>

using namespace std;

// Single Link List Node
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

void InitList(LinkList L){
    L = (LinkList)malloc(sizeof(LNode));
    L -> next = NULL;
}

bool isEmpty(LinkList L){
    if (L -> next == NULL)
        return true;
    else return false;
}

int Length(LinkList &L){
    int l = 0;
    LinkList p = L -> next;
    while (p){
        l++;
        p = p -> next;
    }
    return l;
}

void ClearList(LinkList &L){
    LNode *p, *q;
    p = L -> next;
    while (p){
        q = p -> next;
        free(p);
        p = q;
    }
}

LNode *GetElem(LinkList L, int index){
    int cnt = 1;
    LNode *p = L -> next;
    if (index == 0)
        return L;
    if (index < 1)
        return NULL;
    while (p&&cnt < index){
        p = p -> next;
        cnt++;
    }
    return p;
}

LNode *LocateElem(LinkList L, ElemType e){
    LNode *p = L -> next;
    while (p != NULL && p->data != e)
        p = p -> next;
    return p;
}

void DeleteByIndex(LinkList &L, int index){
    LNode *p, *q;
    p = GetElem(L, index-1);
    q = p->next;
    p->next = q->next;
    free(q);
}

void DeleteByElem(LinkList &L, ElemType e){
    LNode *p, *q;
    p = LocateElem(L, e);
    q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
}

LinkList List_HeadInsert(LinkList &L){
    LNode *s; ElemType e;
    InitList(L);
    std::cin >> e;
    while (e != ERROR){
        s = new LNode;
        s -> data = e;
        s -> next = L -> next;
        L -> next = s;
        std::cin >> e;
    }
    return L;
}

LinkList List_TailInsert(LinkList &L){

}

#endif //DATASTRUCTUREEXERCISE_LINKLIST_H
