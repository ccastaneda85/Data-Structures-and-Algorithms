#ifndef HEAP_H
#define HEAP_H

template <typename T>
class Heap {
public:
    virtual ~Heap() {}
    virtual bool insert(const &T item) = 0;
    virtual int getNumberofNodes() const = 0;
    virtual int getheight() const = 0;
    virtual T peekTop() const = 0;
    virtual bool remove() = 0;
    virtual void clear() = 0;
};

#endif