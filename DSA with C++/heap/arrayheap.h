#ifndef ARRAYHEAP_H
#define ARRAYHEAP_H

#include "heap.h"

template<typename T>
class ArrayHeap : public Heap<T> {

    public:
         ~ArrayHeap() {}
         ArrayHeap() {}
         bool insert(const &T item);
         int getNumberofNodes();
         int getheight();
         T peekTop();
         bool remove();
         void clear();

    private:
        T* store;
        int size;




};


#endif