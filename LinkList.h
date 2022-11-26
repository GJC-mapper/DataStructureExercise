//
// Created by GJC on 2022/11/24.
//

#ifndef DATASTRUCTUREEXERCISE_LINKLIST_H
#define DATASTRUCTUREEXERCISE_LINKLIST_H

#include "Define.h"

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;



#endif //DATASTRUCTUREEXERCISE_LINKLIST_H
