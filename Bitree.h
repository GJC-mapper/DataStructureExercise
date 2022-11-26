//
// Created by GJC on 2022/11/26.
//

#ifndef DATASTRUCTUREEXERCISE_BITREE_H
#define DATASTRUCTUREEXERCISE_BITREE_H

#include "Define.h"

using namespace std;

// Sequence struct BiTree
typedef ElemType SqBiTree[MAXSIZE];
SqBiTree bt;

// Link List struct BiTree
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;



#endif //DATASTRUCTUREEXERCISE_BITREE_H
