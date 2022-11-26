//
// Created by GJC on 2022/11/24.
//

#ifndef DATASTRUCTUREEXERCISE_SQLIST_H
#define DATASTRUCTUREEXERCISE_SQLIST_H

#include "Define.h"
#include <iostream>

using namespace std;

typedef struct {
    ElemType *data;
    int length;
}SqList;

// Initialize
void InitList(SqList &L){
    L.data = new ElemType[MAXSIZE];
    L.length = 0;
}

// Length
int Length(SqList L){
    return L.length;
}

// LocateElem
int LocateElem(SqList &L, ElemType e){
    for (int i = 0; i < L.length; ++i) {
        if (L.data[i] == e)
            return i+1;
    }
    return ERROR;
}

int GetElem(SqList &L, int index, ElemType &e){
    if (index <= L.length)
        return e = L.data[index-1];
    else return ERROR;
}

int ListInsert(SqList &L, int index, ElemType &e){
    if (index > L.length || L.length == MAXSIZE)
        return ERROR;
    else
        for (int i = L.length; i > index-1; i--) {
            L.data[i] = L.data[i - 1];
        }
        L.data[index-1] = e;
        L.length++;
    return 0;
}

int ListDelete(SqList &L, int index, ElemType &e){
    if (index > L.length || index < 1)
        return ERROR;
    else
        e = L.data[index-1];
        for (int i = index-1; i < L.length; i++) {
            L.data[i] = L.data[i+1];
        }
        L.length--;
    return 0;
}

void PrintList(SqList &L){
    if (L.length != 0)
        for (int i = 0; i < L.length; i++) {
            std::cout << L.data[i] << std::endl;
        }
    else std::cout << "Empty List." << std::endl;
}

bool isEmpty(SqList &L){
    if (L.length == 0)
        return true;
    else
        return false;
}

void DestroyList(SqList &L){
    L.length == 0;
    free(L.data);
}

void Empty(SqList &L){
    for (int i = 0; i < L.length; ++i) {
        L.data[i] = 0;
    }
}

#endif //DATASTRUCTUREEXERCISE_SQLIST_H
