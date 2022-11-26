#include <iostream>
#include "Define.h"
#include "SqList.h"

using namespace std;

int main() {

    // Sequence List
    SqList L;
    InitList(L);

    for (int i = 0; i < 10; i++) {
        ElemType e = i;
        ListInsert(L, i, e);
    }

    PrintList(L);


    return 0;
}
