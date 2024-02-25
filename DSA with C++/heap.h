#ifndef HEAP_H
#define HEAP_H

template <typename T>
class Heap
{
public:
    virtual ~Heap() {}
    virtual insert(const &T item) = 0;
};

#endif